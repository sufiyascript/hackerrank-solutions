WITH RECURSIVE nums AS (
    SELECT 2 AS n
    UNION ALL
    SELECT n + 1
    FROM nums
    WHERE n < 1000
)
SELECT GROUP_CONCAT(n SEPARATOR '&')
FROM nums
WHERE NOT EXISTS (
    SELECT 1
    FROM nums d
    WHERE d.n < nums.n
      AND d.n <= SQRT(nums.n)
      AND MOD(nums.n, d.n) = 0
);
