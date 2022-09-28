#include<stdio.h>
void main(){
int week,vacc,alrm;
printf("enter the day of week 0=sun,1=mon,2=tue,3=wed,4=thurs,5=fri,6=sat\n");
scanf("%d",&week);
printf("enter 0 if there is no vacation and 1 if there is location\n");
scanf("%d",&vacc);
if(vacc>0)
{
printf("7:00\n");
if(week==0||week==6)
printf("there is no alarm");
else if (week>6)
printf("enter correct values\n");
else
printf("alrm is at 10\n");
if (vacc==0)
if(week==0||week==6)
printf("alrm is at 10\n");
else if(week>6)
printf("enter correct values\n");
else
printf("alrm is at 7");
}
}
