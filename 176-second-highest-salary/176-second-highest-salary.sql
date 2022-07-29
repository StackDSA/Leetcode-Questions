# Write your MySQL query statement below
SELECT Max(salary) as SecondHighestSalary from Employee where salary<>(SELECT Max(salary) from Employee)