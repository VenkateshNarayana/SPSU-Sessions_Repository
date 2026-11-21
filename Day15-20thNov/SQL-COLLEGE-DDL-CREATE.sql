-- DDL – Data Definition Language . DDL commands are used to create and modify database structures.
-- CREATE, ALTER, DROP, TRUNCATE
-- DROP – Delete a table
-- DROP TABLE students; 

CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100) NOT NULL,
    hod_name VARCHAR(100),
    location VARCHAR(50)
);
-- TRUNCATE – Delete all rows while retaining the table structure

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(100) NOT NULL,
    gender VARCHAR(10),
    dob DATE,
    email VARCHAR(100) UNIQUE,
    city VARCHAR(50),
    department_id INT,

    FOREIGN KEY (department_id)
    REFERENCES departments(department_id)
);
ALTER TABLE students
MODIFY student_name VARCHAR(150);


ALTER TABLE students
ADD student_email   VARCHAR(50),
ADD student_address VARCHAR(150) DEFAULT ('NOT SPECIFIED');

ALTER TABLE students
DROP  COLUMN student_email; 

ALTER TABLE students
RENAME  COLUMN student_address TO address; 

ALTER TABLE students
ADD INDEX idx_city_department (city, department_id);

ALTER TABLE students 
DROP INDEX idx_city_department;

CREATE TABLE courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(100) NOT NULL,
    credits INT,
    department_id INT,

    FOREIGN KEY (department_id)
    REFERENCES departments(department_id)
);


CREATE TABLE enrollments (
    enrollment_id INT PRIMARY KEY,
    student_id INT,
    course_id INT,
    semester INT,
    enrollment_date DATE,
    marks DECIMAL(5,2),

    FOREIGN KEY (student_id)
    REFERENCES students(student_id),

    FOREIGN KEY (course_id)
    REFERENCES courses(course_id),

    UNIQUE (student_id, course_id, semester),

    CHECK (marks IS NULL OR (marks >= 0 AND marks <= 100))
);


