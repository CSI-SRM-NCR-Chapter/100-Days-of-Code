# Write your MySQL query statement below
SELECT w2.id from Weather w1,Weather w2
WHERE datediff(w2.recordDate, w1.recordDate) = 1 AND w2.temperature > w1.temperature;
