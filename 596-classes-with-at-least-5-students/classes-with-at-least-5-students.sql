# Write your MySQL query statement below
SELECT class
FROM (
    SELECT class, COUNT(student) AS total_students
    FROM Courses
    GROUP BY class
) AS sub
WHERE total_students >= 5;