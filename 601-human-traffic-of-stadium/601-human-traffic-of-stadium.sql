select
    *
from
(select
    s1.id,
    s1.visit_date,
    s1.people
from
    Stadium s1,
    Stadium s2,
    Stadium s3
where
    s1.id + 2 = s3.id and
    s2.id + 1 = s3.id and
    s1.people >= 100 and
    s2.people >= 100 and
    s3.people >= 100
union
select
    s2.id,
    s2.visit_date,
    s2.people
from
    Stadium s1,
    Stadium s2,
    Stadium s3
where
    s1.id + 2 = s3.id and
    s2.id + 1 = s3.id and
    s1.people >= 100 and
    s2.people >= 100 and
    s3.people >= 100
union
select
    s3.id,
    s3.visit_date,
    s3.people
from
    Stadium s1,
    Stadium s2,
    Stadium s3
where
    s1.id + 2 = s3.id and
    s2.id + 1 = s3.id and
    s1.people >= 100 and
    s2.people >= 100 and
    s3.people >= 100
) t
order by
    t.visit_date
;