
-- A. INNER JOIN
-- Returns only matching records from both tables.
SELECT s.student_id, s.name, d.dept_name
FROM students s
INNER JOIN departments d
ON s.dept_id = d.dept_id;

-- B. LEFT JOIN
-- Returns all records from the left table and matching records from the right table.
SELECT s.name, d.dept_name
FROM students s
LEFT JOIN departments d
ON s.dept_id = d.dept_id;

-- C. RIGHT JOIN
-- Returns all records from the right table and matching records from the left table.
SELECT s.name, d.dept_name
FROM students s
RIGHT JOIN departments d
ON s.dept_id = d.dept_id;

-- D. CROSS JOIN
-- Returns all possible combinations of rows from two tables.
SELECT s.name, d.dept_name
FROM students s
CROSS JOIN departments d;
