create view student_performance as 
SELECT
    name,
    marks,
    CASE
        WHEN marks >= 90 THEN 'Excellent'
        WHEN marks >= 75 THEN 'Good'
        WHEN marks >= 60 THEN 'Average'
        ELSE 'Needs Improvement'
    END AS performance
FROM students;

select * from student_performance where marks <60;

drop view student_performance;

