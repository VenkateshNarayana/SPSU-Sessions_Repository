use college_db;
SELECT * FROM STUDENTS;
-- 2.	The principal wants to know which city contributes the maximum number of students.
select * 
from (select city,count(*) as c_count 
		from students
		group by city) as city_with_student_count
where c_count = (select max(c_count) 
				from (select city,count(*) as c_count 
						from students
						group by city) as city_count);
select city,count(*) as c_count 
from students
group by city
order by c_count desc
limit  1;

-- 5.	Identify cities that have only one student.
select city,count(*) as c_count 
from students
group by city
having c_count=1;

-- 6.	Find departments where the average salary is above the overall average salary in employee table.
select emp_dept,avg(emp_salary) as avg_dep_sal 
from employee
group by emp_dept
having avg_dep_sal> (select avg(emp_salary) from employee);
-- 7.	Find the number of students whose names contain the letter 'a', grouped by department.
use college_db;
select d.department_name,count(s.student_id)
from students s inner join departments d on s.department_id = d.department_id
where s.student_name like '%a%'
group by s.department_id;
-- 8.	Find the city with the highest number of female students.
select * from 
	(select city,gender,count(*) as f_count
	from students
	where gender = 'Female'
	group by city,gender)as city_fcount
where f_count =(select max(f_count) from (select city,gender,count(*) as f_count
				from students
				where gender = 'Female'
				group by city,gender)as city_fcount);
                
-- 9.Display departments having at least two male students and at least two female students.
select department_id,sum(m_count) as m_count,sum(f_count) as f_count from 
		(select department_id,0 as m_count,count(*) f_count
		from students
		where gender = 'Female'
		group by department_id
		union
		select department_id,count(*) as m_count,0 f_count
		from students
		where gender = 'Male'
		group by department_id) as g_count
group by department_id
having m_count>=2 and f_count>=2;
        
-- 10.	Find the department-wise percentage of female students.
select department_id,sum(tot_count) as tot_count,sum(f_count) as f_count,(sum(f_count)/sum(tot_count)*100) as perc from 
		(select department_id,0 as tot_count,count(*) f_count
		from students
		where gender = 'Female'
		group by department_id
		union
		select department_id,count(*) as tot_count,0 f_count
		from students
		group by department_id) as g_count
group by department_id
