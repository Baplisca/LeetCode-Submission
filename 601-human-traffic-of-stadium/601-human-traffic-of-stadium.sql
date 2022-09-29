select
    distinct s1.*
from
    Stadium s1,
    Stadium s2,
    Stadium s3
where
    ((s1.id + 1 = s2.id and s2.id + 1 = s3.id and s3.id - 2 = s1.id) or
    (s2.id + 1 = s3.id and s3.id + 1 = s1.id and s1.id - 2 = s2.id) or
    (s3.id + 1 = s1.id and s1.id + 1 = s2.id and s2.id - 2 = s3.id)) and
    s1.people >= 100 and
    s2.people >= 100 and
    s3.people >= 100
order by
    s1.visit_date
;