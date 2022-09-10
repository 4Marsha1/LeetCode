# Write your MySQL query statement below
Select D.name as Department, E.name as Employee, E.salary as Salary
from Employee as E Inner Join Department as D 
where E.departmentId=D.id  
AND (DepartmentId,Salary) in 
  (SELECT DepartmentId,max(Salary) as max FROM Employee GROUP BY DepartmentId);
