CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100) NOT NULL,
    hod_name VARCHAR(100),
    location VARCHAR(50)
);

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(100) NOT NULL,
    gender VARCHAR(10),
    dob DATE,
    email VARCHAR(100) UNIQUE,
    city VARCHAR(50),
    department_id INT,

    FOREIGN KEY (department_id)
    REFERENCES departments(department_id)
);

CREATE TABLE courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(100) NOT NULL,
    credits INT,
    department_id INT,

    FOREIGN KEY (department_id)
    REFERENCES departments(department_id)
);


CREATE TABLE enrollments (
    enrollment_id INT PRIMARY KEY,
    student_id INT,
    course_id INT,
    semester INT,
    enrollment_date DATE,
    marks DECIMAL(5,2),

    FOREIGN KEY (student_id)
    REFERENCES students(student_id),

    FOREIGN KEY (course_id)
    REFERENCES courses(course_id),

    UNIQUE (student_id, course_id, semester),

    CHECK (marks IS NULL OR (marks >= 0 AND marks <= 100))
);


