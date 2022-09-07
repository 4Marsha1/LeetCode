# Write your MySQL query statement below
SELECT P.firstName,P.lastName,A.city,A.state from PERSON as P 
Left Join
ADDRESS as A using(personId);