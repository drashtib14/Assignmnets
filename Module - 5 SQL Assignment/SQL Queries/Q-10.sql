-- Create After Insert trigger on Employee table which insert records in viewtable

CREATE VIEW EmployeeView AS
SELECT Employee_id, First_name, Last_name, Salary, Joining_date, Department FROM employee;

CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
    INSERT INTO EmployeeView (Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);

INSERT INTO Employee VALUES (10, 'Alice', 'Smith', 700000, '01-FEB-13 12.00.00 AM', 'B');

DROP TRIGGER AFTER_EMPLOYEE_INSERT;

SELECT * FROM EmployeeView;

SELECT * FROM EMPLOYEE;