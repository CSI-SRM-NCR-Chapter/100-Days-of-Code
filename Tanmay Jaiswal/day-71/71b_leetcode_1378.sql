select b.unique_id, a.name from employees as a
left outer join employeeuni as b
on a.id = b.id;
