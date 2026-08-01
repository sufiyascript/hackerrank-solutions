WITH RECURSIVE triangle AS (
    SELECT 1 AS n
    UNION ALL
    SELECT n + 1
    FROM triangle
    WHERE n < 20
)
SELECT REPEAT('* ', n)
FROM triangle;
