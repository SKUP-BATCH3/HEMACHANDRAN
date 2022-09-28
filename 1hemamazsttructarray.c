#include<stdio.h>
struct students{
char name;
int marks;
float cgpa;
};
int main()
    {
struct students s[3];
printf("enter the details\n");{
for (int i=0;i<3;i++)
    scanf("\n%c \n%d \n%f",&s[i].name,&s[i].marks,&s[i].cgpa);
for (int i=0;i<3;i++)
    printf("%c\n %d\n %f\n",s[i].name,s[i].marks,s[i].cgpa);
    }
    }
