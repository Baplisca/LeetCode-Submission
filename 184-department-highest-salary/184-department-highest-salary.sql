select
    d.name as Department,
    e.name as Employee,
    e.salary as Salary
from
    Employee e
inner join
    Department d
on
    e.departmentId = d.id
where
    (e.salary, d.id) in (select max(salary), departmentId from Employee group by departmentId)
;