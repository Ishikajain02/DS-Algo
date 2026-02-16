# Write your MySQL query statement below
select r.firstName,r.lastName,s.city,s.state from person r LEFT OUTER JOIN address s ON r.personId=s.personId;