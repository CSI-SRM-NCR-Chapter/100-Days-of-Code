select t.product_id, round(sum(price*units)/sum(units), 2) as average_price
from prices t
join unitsSold us on t.product_id = us.product_id
where us.purchase_date between t.start_date and t.end_date
group by t.product_id;
