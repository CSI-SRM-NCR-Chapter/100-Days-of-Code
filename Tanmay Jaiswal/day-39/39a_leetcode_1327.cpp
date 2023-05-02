select product_name, sum(unit) as unit
from products p
left join orders o on p.product_id = o.product_id
where month(order_date)=2 and year(order_date)=2020
group by p.product_id
having unit >= 100;
