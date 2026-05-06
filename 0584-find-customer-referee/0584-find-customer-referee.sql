# Write your MySQL query statement below
SELECT name 
FROM Customer
WHERE referee_Id <> 2 OR ISNULL(referee_Id)