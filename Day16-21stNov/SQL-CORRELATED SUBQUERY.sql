use student_db;
select * from students;
select * 
from employee a
where a.emp_salary = (select max(b.emp_salary)
                from employee b
                where b.emp_dept = a.emp_dept);
                