#include<stdio.h>
int main(){
int speed;
printf("enter the speed:\n");
scanf("%d",&speed);
if (speed==0)
printf("no ticket");
if (speed==1)
printf("small ticket");
if (speed==2)
printf("big ticket");
if (speed<60)
printf("zero");
if (speed>=61&&speed<=80)
printf("one");
if(speed>81)
printf("two");
}
