# Write your MySQL query statement below
select name,unique_id from Employees e left join EmployeeUNI f on e.id=f.id;