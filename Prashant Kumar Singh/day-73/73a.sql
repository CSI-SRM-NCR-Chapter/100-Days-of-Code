# Write your MySQL query statement below
select prices.product_id, ROUND(SUM(price * units) / SUM(units), 2) as average_price
from Prices join UnitsSold 
on prices.product_id = unitssold.product_id
and purchase_date between start_date and end_date
group by product_id
