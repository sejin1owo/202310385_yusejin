struct student s = { 24, “Kim”, 4.3 }; struct student *p;
p = &s;
printf("학번=%d 이름=%s 키=%f \n", p->number, p->name, p->grade);
