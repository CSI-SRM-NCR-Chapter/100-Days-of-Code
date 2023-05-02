# Write your MySQL query statement below
select Products.product_name, sum(unit)as unit from
Products left join Orders 
on Products.product_id  = Orders.product_id
WHERE order_date > '2020-01-31' AND order_date < '2020-03-01'
group by Products.product_id
having sum(unit)>=100;
