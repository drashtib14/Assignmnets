-- Get department wise maximum salary from employee table order by salary ascending

SELECT * FROM employee;

SELECT Department,max(salary) AS max_salary FROM employee GROUP BY Department ORDER BY max_salary ASC;