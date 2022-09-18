select
    u.user_id as buyer_id,
    u.join_date,
    IFNULL(sum(case when year(o.order_date) = 2019 and o.order_date >= u.join_date then 1 else 0 end), 0) as orders_in_2019
from
    Users u
left join
    Orders o
on 
    u.user_id = o.buyer_id
group by
    u.user_id
;