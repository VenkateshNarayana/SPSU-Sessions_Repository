-- Step 1: Insert departments
INSERT INTO departments VALUES
(1, 'Computer Science', 'Dr. Ramesh', 'Block A'),
(2, 'Electronics', 'Dr. Suresh', 'Block B'),
(3, 'Mechanical', 'Dr. Kumar', 'Block C'),
(4, 'Information Science', 'Dr. Priya', 'Block D');

-- Step 2: Insert students
INSERT INTO students VALUES
(111, 'Jatin', 'Male', '2002-11-3', 'jatin@gmail.com', 'Hyderabad', 2);

(101, 'Rahul', 'Male', '2004-05-12', 'rahul@gmail.com', 'Bangalore', 1),
(102, 'Priya', 'Female', '2004-08-20', 'priya@gmail.com', 'Mysore', 1),
(103, 'Arun', 'Male', '2003-11-15', 'arun@gmail.com', 'Chennai', 2),
(104, 'Sneha', 'Female', '2004-02-10', 'sneha@gmail.com', 'Bangalore', 2),
(105, 'Kiran', 'Male', '2003-07-25', 'kiran@gmail.com', 'Hyderabad', 3),
(106, 'Divya', 'Female', '2004-09-18', 'divya@gmail.com', 'Mysore', 3),
(107, 'Vikram', 'Male', '2003-12-05', 'vikram@gmail.com', 'Bangalore', 4),
(108, 'Ananya', 'Female', '2004-04-22', 'ananya@gmail.com', 'Chennai', 4),
(109, 'Manoj', 'Male', '2004-06-14', 'manoj@gmail.com', 'Pune', 1),
(110, 'Pooja', 'Female', '2003-10-30', 'pooja@gmail.com', 'Hyderabad', 2);


-- Step 3: Insert courses
INSERT INTO courses VALUES
(201, 'Database Management Systems', 4, 1),
(202, 'Data Structures', 4, 1),
(203, 'Computer Networks', 3, 1),
(204, 'Digital Electronics', 4, 2),
(205, 'Microprocessors', 3, 2),
(206, 'Thermodynamics', 4, 3),
(207, 'Machine Design', 3, 3),
(208, 'Software Engineering', 4, 4),
(209, 'Web Technologies', 3, 4);

-- Step 4: Insert enrollments and marks
INSERT INTO enrollments VALUES
(1, 101, 201, 3, '2026-01-10', 85),
(2, 101, 202, 3, '2026-01-10', 78),
(3, 101, 203, 3, '2026-01-10', 92),
(4, 102, 201, 3, '2026-01-10', 90),
(5, 102, 202, 3, '2026-01-10', 88),
(6, 102, 203, 3, '2026-01-10', 76),
(7, 103, 204, 3, '2026-01-12', 72),
(8, 103, 205, 3, '2026-01-12', 81),
(9, 104, 204, 3, '2026-01-12', 95),
(10, 104, 205, 3, '2026-01-12', 89),
(11, 105, 206, 3, '2026-01-15', 68),
(12, 105, 207, 3, '2026-01-15', 74),
(13, 106, 206, 3, '2026-01-15', 91),
(14, 106, 207, 3, '2026-01-15', 86),
(15, 107, 208, 3, '2026-01-18', 82),
(16, 107, 209, 3, '2026-01-18', 79),
(17, 108, 208, 3, '2026-01-18', 94),
(18, 108, 209, 3, '2026-01-18', 90),
(19, 109, 201, 3, '2026-01-20', 65),
(20, 109, 202, 3, '2026-01-20', NULL),
(21, 110, 204, 3, '2026-01-20', 87),
(22, 110, 205, 3, '2026-01-20', 93);



