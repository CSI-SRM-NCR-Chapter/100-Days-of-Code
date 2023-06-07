# Write your MySQL query statement below
select t1.id as id from weather t1 
inner join weather t2 
where t1.temperature >t2.temperature and datediff(t1.recorddate ,t2.recorddate)=1;
