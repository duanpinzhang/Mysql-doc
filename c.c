create table score (sno int(32), cno int(6),grade int(6), 
foreign key(sno) references stuinfo(sno)
	on delete cascade
    on update cascade,
foreign key(cno) references course(cno)
	on delete no action
    on update cascade,
primary key(sno,cno));
