SELECT
    MAX(CASE WHEN Occupation = 'Doctor' THEN Name END) Doctor,
    MAX(CASE WHEN Occupation = 'Professor' THEN Name END) Professor,
    MAX(CASE WHEN Occupation = 'Singer' THEN Name END) Singer,
    MAX(CASE WHEN Occupation = 'Actor' THEN Name END) Actor
FROM
(
    SELECT Name,
           Occupation,
           ROW_NUMBER() OVER (PARTITION BY Occupation ORDER BY Name) rn
    FROM OCCUPATIONS
) x
GROUP BY rn
ORDER BY rn;
