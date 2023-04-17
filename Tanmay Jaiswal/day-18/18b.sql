Delete p1 from person p1
INNER JOIN person p2
where 
    p1.email = p2.email AND
    p1.id > p2.id;