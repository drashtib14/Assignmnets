-- Create Table Name : Student and Exam

-- create database
CREATE SCHEMA assignment;

-- create table student
CREATE TABLE student (
rollno INT PRIMARY KEY,
name VARCHAR(45) NOT NULL,
branch VARCHAR(50) NOT NULL
);

-- create table exam
CREATE TABLE exam (
rollno INT NOT NULL,
s_code VARCHAR(45) NOT NULL,
marks INT NOT NULL NOT NULL,
p_code VARCHAR(45),
FOREIGN KEY (rollno) REFERENCES student(rollno)
);

INSERT INTO student(rollno, name, branch) VALUES
(1, 'Jay', 'Computer Science'),
(2, 'Suhani', 'Electronic and Com'),
(3, 'Kriti', 'Electronic and Com');

INSERT INTO exam (rollno, s_code, marks, p_code) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'CS102', 70, 'EC'),
(3, 'EC101', 45, 'EC'),
(3, 'EC101', 50, 'EC');

SELECT * FROM student;
SELECT * FROM exam;