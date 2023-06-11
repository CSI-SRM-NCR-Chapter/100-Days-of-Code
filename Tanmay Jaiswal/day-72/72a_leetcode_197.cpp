select a.id as id
from weather a
join weather b
on DATEDIFF(a.recordDate, b.recordDate) = 1
and a.temperature > b.temperature;
