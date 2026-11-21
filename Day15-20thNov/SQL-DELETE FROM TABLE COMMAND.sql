-- Important: Always be careful when using UPDATE and DELETE without a WHERE condition.
-- DELETE FROM students;
-- This deletes every row in the table.
use student_db;

select * from students;

SET SQL_SAFE_UPDATES = 0;
update students
set age = 21,name='Sharanya',email='saranya@gmail.com' 
where id = 6;

DELETE FROM students where id=7;

SET SQL_SAFE_UPDATES = 1;
