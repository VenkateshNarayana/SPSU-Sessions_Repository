use college_db;
SELECT * FROM students;

-- UPDATE – Modify existing records
UPDATE students
SET marks = 95
WHERE student_id = 101;

-- DELETE – Delete records
DELETE FROM students
WHERE student_id = 105;

UPDATE students
SET dept_id = 1 WHERE student_id IN (101, 103);

UPDATE students
SET dept_id = 2 WHERE student_id IN (102, 105);

UPDATE students
SET dept_id = 3 WHERE student_id = 104;
