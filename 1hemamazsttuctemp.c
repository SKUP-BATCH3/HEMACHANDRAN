#include<stdio.h>
struct employee1 {
char name[20];
int id;
int age;
float salary;
int experience;
};
struct employee2{
char name[20];
int id;
int age;
float salary;
int experience;
};
struct employee3{
char name[20];
int id;
int age;
float salary;
int experience;
};

main(){
{
struct employee1 s={"maz",20220826,21,31000,1};
printf("employee1 name=%s\n id=%d\n age=%d\n salary=%f\n experience=%d\n\n",s.name,s.id,s.age,s.salary,s.experience);
}
{
struct employee2 s={"chandru",20220808,21,41000,2};
printf("employee2 name=%s\n id=%d\n age=%d\n salary=%f\n experience=%d\n\n",s.name,s.id,s.age,s.salary,s.experience);
}
{
struct employee3 s={"bumik",20220899,21,-1000,3};
printf("employee3 name=%s\n id=%d\n age=%d\n salary=%f\n experience=%d\n\n",s.name,s.id,s.age,s.salary,s.experience);

}}
