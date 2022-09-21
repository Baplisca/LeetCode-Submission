select
    p.product_id,
    p.product_name
from
    Product p
inner join
    Sales s
on
    p.product_id = s.product_id
group by
    p.product_id
having
    p.product_id not in (select s.product_id from Sales s where s.sale_date < '2019-01-01' or s.sale_date > '2019-03-31')
;