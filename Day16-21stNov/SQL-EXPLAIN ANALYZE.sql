EXPLAIN ANALYZE
SELECT *
FROM students
WHERE city = 'Hyderabad';

-- -> Filter: (students.city = 'Hyderabad')  (cost=1.35 rows=1.1) (actual time=0.0848..0.11 rows=3 loops=1)
--     -> Table scan on students  (cost=1.35 rows=11) (actual time=0.0675..0.0949 rows=11 loops=1)
 










