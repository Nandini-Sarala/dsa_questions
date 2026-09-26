# Write your MySQL query statement below
#select num from MyNumbers group by num having count(distinct num);
select max(num) as num from (
    select num from MyNumbers group by num having count(num)=1
) as t;