select
    *
from
    Cinema
where
    id % 2 and
    description != 'boring'
order by
    rating desc
;