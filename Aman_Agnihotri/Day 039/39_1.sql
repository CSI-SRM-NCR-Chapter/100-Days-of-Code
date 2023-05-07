# Write your MySQL query statement below
# Write your MySQL query statement below
select product_name, unit
    from Products
    join (select product_id, sum(unit) as unit from Orders
         where order_date between '2020-02-01' and '2020-02-29'
         group by product_id
         having sum(unit) >= 100) as orders_sum
    on Products.product_id = orders_sum.product_id;