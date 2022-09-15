select
    user_id,
    max(time_stamp) as last_stamp
from
    Logins
where
    YEAR(time_stamp) >= '2020' and
    YEAR(time_stamp) < '2021'
group by
    user_id
;