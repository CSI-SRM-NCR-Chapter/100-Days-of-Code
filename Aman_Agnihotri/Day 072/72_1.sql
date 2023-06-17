SELECT
    w1.id
FROM weather w1 JOIN weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
AND w1.Temperature > w2.Temperature