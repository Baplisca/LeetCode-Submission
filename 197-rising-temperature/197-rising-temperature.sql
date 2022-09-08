select
    w2.id
from
    Weather w1
join
    Weather w2
on
    w2.recordDate = DATE_ADD(w1.recordDate, INTERVAL 1 DAY)
where
    w2.temperature > w1.temperature
;