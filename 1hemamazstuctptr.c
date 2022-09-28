#include<stdio.h>
struct student{
char name;
int marks;
float cgpa;

};
int main()
{
struct student *ptr;
struct student s;
printf("enter the details:\n");
scanf("%c %d %f",&s.name,&s.marks,&s.cgpa);
ptr=&s;
printf("%c %d %f",ptr->name,ptr->marks,ptr->cgpa);
}
