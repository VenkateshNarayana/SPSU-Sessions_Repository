use college_db;
-- DQL – Data Query Language
-- SELECT is used to retrieve information.
SELECT * FROM students;

-- Retrieve only specific columns:
SELECT student_name, department_id
FROM students
where department_id in(1,2,3)
order by student_name desc
limit 4;

select department_id,count(gender) as Fcount
from students
where gender = 'Female'
group by department_id;

select department_id,gender,count(*) as G_Count
from students
-- where gender = 'Female'
group by department_id,gender
having gender = 'Female';