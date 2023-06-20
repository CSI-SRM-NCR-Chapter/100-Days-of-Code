# OJ: https://leetcode.com/problems/not-boring-movies/

SELECT
    *
FROM
    cinema
WHERE
    MOD(id, 2) = 1 AND description != 'boring'
ORDER BY rating DESC