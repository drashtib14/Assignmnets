-- Create table given below: Employee and IncentiveTable

CREATE TABLE employee (
	employee_id INT PRIMARY KEY,
    first_name VARCHAR (45) NOT NULL,
    last_name VARCHAR(45) NOT NULL,
    salary INT,
    joining_date VARCHAR(30) NOT NULL,
    department VARCHAR(45) NOT NULL
);

INSERT INTO employee VALUES
(1, 'John', 'Abraham', 1000000, '01-JAN-13 12.00.00 AM', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 12.00.00 AM', 'Insuarance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 12.00.00 AM', 'Banking'),
(4,'Tom', 'Jose', 600000, '01-FEB-13 12.00.00 AM', 'Insuarance'),
(5,'Jerry', 'Pinto', 650000, '01-FEB-13 12.00.00 AM', 'Insuarance'),
(6,'Philip','Mathew', 750000, '01-JAN-13 12.00.00 AM', 'Services'),
(7,'TestaName1', '123', 650000, '01-JAN-13 12.00.00 AM', 'Services'),
(8,'TestName2','Lname%', 600000, '01-FEB-13 12.00.00 AM','Insuarance');

CREATE TABLE incentive (
	employee_ref_id INT NOT NULL,
    incentive_date DATE NOT NULL,
    incentive_amount INT NOT NULL,
    FOREIGN KEY (employee_ref_id) REFERENCES employee(employee_id)
);

-- date format
ALTER TABLE incentive MODIFY incentive_date VARCHAR(30);
UPDATE incentive SET incentive_date = date_format(incentive_date,'%d-%b-%y');

INSERT INTO incentive VALUES 
(1,'01-FEB-13',5000),
(2,'01-FEB-13',3000), 
(3,'01-FEB-13',4000),
(1,'01-JAN-13',4500),
(2,'01-JAN-13',3500);

SELECT * FROM employee;
SELECT * FROM incentive;

SELECT first_name FROM employee where first_name = 'Tom';