# Write your MySQL query statement below
SELECT MAX(salary) as SecondHighestSalary FROM EMPLOYEE WHERE SALARY NOT IN (
    SELECT MAX(salary) from EMPLOYEE
); 