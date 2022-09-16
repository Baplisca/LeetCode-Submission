select
    stock_name,
    sum(Sell) - sum(Buy) as capital_gain_loss
from
    (select
        stock_name,
        case when operation = 'Sell' then sum(price) else 0 end as Sell,
        case when operation = 'Buy' then sum(price) else 0 end as Buy
     from
        Stocks
     group by
        stock_name,
        operation
    )
    Stocks
group by
    stock_name
;