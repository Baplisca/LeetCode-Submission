select 
    id,
    sum(case when month = "Jan" then revenue end) Jan_revenue,
    sum(case when month = "Feb" then revenue end) Feb_revenue,
    sum(case when month = "Mar" then revenue end) Mar_revenue,
    sum(case when month = "Apr" then revenue end) Apr_revenue,
    sum(case when month = "May" then revenue end) May_revenue,
    sum(case when month = "Jun" then revenue end) Jun_revenue,
    sum(case when month = "Jul" then revenue end) Jul_revenue,
    sum(case when month = "Aug" then revenue end) Aug_revenue,
    sum(case when month = "Sep" then revenue end) Sep_revenue,
    sum(case when month = "Oct" then revenue end) Oct_revenue,
    sum(case when month = "Nov" then revenue end) Nov_revenue,
    sum(case when month = "Dec" then revenue end) Dec_revenue
from 
    Department
group by 
    id
;