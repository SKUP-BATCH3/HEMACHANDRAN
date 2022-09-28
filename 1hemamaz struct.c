#include<stdio.h>
union student{
char name[10];
int id;
float marks;
};
main()
{
union student u={"maz",158,95.5};
printf("name:%s\t id no:%d\t marks:%f\t",u.name,u.id,u.marks);
printf("size is:%d",sizeof(u.marks));
}
