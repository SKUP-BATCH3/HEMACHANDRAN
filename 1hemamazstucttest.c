#include<stdio.h>
struct students{
char name;
int marks;
float cgpa;
};
int main()
    {{
struct students s[3];
printf("enter the details of student 1\n");
scanf("\n%c \n%d \n%f",&s[0].name,&s[0].marks,&s[0].cgpa);
printf("%c %d %f\n",s[0].name,s[0].marks,s[0].cgpa);

printf("enter the details of student 2\n");
scanf("\n%c \n%d \n%f",&s[1].name,&s[1].marks,&s[1].cgpa);
printf("%c %d %f\n",s[1].name,s[1].marks,s[1].cgpa);

if(s[0].marks<s[1].marks)
    printf("win");
/*for (int i=0;i<3;i++){
    scanf("\n%c \n%d \n%f",&s[i].name,&s[i].marks,&s[i].cgpa);
}
for (int i=0;i<3;i++){
    printf("%c\n %d\n %f\n",s[i].name,s[i].marks,s[i].cgpa);
    }*/
}
    }

