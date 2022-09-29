select
    t.Department,
    t.Employee,
    t.salary
from
(select 
    d.name as "Department",
    e.name as "Employee",
    e.salary,
    dense_rank() over (partition by e.departmentId order by e.salary desc) as "rank"
 from
    Employee e
inner join
    Department d
on
    e.departmentId = d.id
) t
where  
    t.rank <= 3
;