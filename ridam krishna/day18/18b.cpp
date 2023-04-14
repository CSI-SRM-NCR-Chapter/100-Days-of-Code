# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
delete a from person as a, person as b where a.id>b.id and a.email=b.email;
