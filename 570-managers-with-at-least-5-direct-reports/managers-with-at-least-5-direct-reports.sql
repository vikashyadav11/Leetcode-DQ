# Write your MySQL query statement below
select e.name from Employee e join (SELECT managerId 
    FROM Employee 
    GROUP BY managerId 
    HAVING COUNT(*) >= 5) d on e.id=d.managerId;
