WITH ChallengeCount AS (
    SELECT
        h.hacker_id,
        h.name,
        COUNT(c.challenge_id) AS total_challenges
    FROM Hackers h
    JOIN Challenges c
        ON h.hacker_id = c.hacker_id
    GROUP BY h.hacker_id, h.name
)

SELECT
    hacker_id,
    name,
    total_challenges
FROM ChallengeCount
WHERE total_challenges = (
        SELECT MAX(total_challenges)
        FROM ChallengeCount
      )
   OR total_challenges IN (
        SELECT total_challenges
        FROM ChallengeCount
        GROUP BY total_challenges
        HAVING COUNT(*) = 1
      )
ORDER BY total_challenges DESC, hacker_id;
