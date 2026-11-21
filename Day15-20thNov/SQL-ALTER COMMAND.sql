-- ALTER – Modify table structure

-- Add a new column:
ALTER TABLE students
ADD email VARCHAR(100);

-- Add a multiple columns:
ALTER TABLE students
ADD address VARCHAR(200),
ADD admission_year INT;

-- Modify an existing column:
ALTER TABLE students
MODIFY name VARCHAR(100);

-- Modify an existing column to add constraint of NOT NULL:
ALTER TABLE students
MODIFY student_name VARCHAR(150) NOT NULL;

-- RENAME any existing column.
ALTER TABLE students
RENAME COLUMN student_name TO full_name;

-- DROP any existing column.
ALTER TABLE students
DROP COLUMN mobile;

-- ADD a primary key .
ALTER TABLE students
ADD PRIMARY KEY (student_id);

-- ADD a composite primary key .
-- A primary key must contain unique, non-NULL values. If a primary key already exists, you must drop it before adding another one.
ALTER TABLE enrollments
ADD PRIMARY KEY (student_id, course_id, semester);

-- ADD a FOREIGN KEY .
ALTER TABLE students
ADD CONSTRAINT fk_student_department
FOREIGN KEY (department_id)
REFERENCES departments(department_id);

-- ADD UNIQUE constraint.
ALTER TABLE students
ADD CONSTRAINT uq_student_email UNIQUE (email);

-- ADD CHECK constraint.
ALTER TABLE enrollments
ADD CONSTRAINT chk_marks
CHECK (marks >= 0 AND marks <= 100);

-- ADD an INDEX on an existing column.
ALTER TABLE students
ADD INDEX idx_student_name (student_name);

-- ADD a Composite INDEX on columns.
ALTER TABLE students
ADD INDEX idx_city_department (city, department_id);

-- DROP any INDEX or CONSTRAINTS existing on any column.
ALTER TABLE students DROP PRIMARY KEY;
ALTER TABLE enrollments DROP CHECK chk_marks;
