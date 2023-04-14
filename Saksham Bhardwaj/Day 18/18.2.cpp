delete p from person as p, person as s where p.id>s.id and p.email=s.email;
