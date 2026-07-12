# Write your MySQL query statement below
select e.name from Employee e join (select  managerId,count(*) as cnt from Employee group by managerId having count(*)>=5) d on e.id=d.managerId;