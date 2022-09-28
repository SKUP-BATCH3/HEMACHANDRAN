#include<stdio.h>
int main(){
int me,date;
printf("enter the me clothing rating:\n");
scanf("%d",&me);
printf("enter the dates clothing rating:\n");
scanf("%d",&date);
    if (me>=0&&me<=2||date>=0&&date<=2)
{
    printf("0=no\n");
}
if (me>=8&&me<=10||date>=8&&date<=10)
{
    printf("2=yes\n");
}
if (me>=3&&me<=7||date>=3&&date<=7)
{
    printf("1=maybe\n");
}
}
