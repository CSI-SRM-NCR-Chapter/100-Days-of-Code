# Write your MySQL query statement below
select product_id, ifnull(round(sum(prices_sum) / sum(units), 2), 0) as average_price
    from (
        select p.product_id as product_id, units, price * units as prices_sum
            from Prices p left join UnitsSold u
            on p.product_id = u.product_id and purchase_date between start_date and end_date
    ) as temp
    group by product_id;