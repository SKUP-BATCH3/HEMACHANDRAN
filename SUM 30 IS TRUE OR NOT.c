#include<stdio.h>
int true(int,int);
int a=15,b=14,r1,sum;
int main()
{
    sum=a+b;
r1=true(a,b);
printf("%d\n",r1);
}
int true(int a,int b)
{
if(a==30 || b==30 || sum==30)
{
r1=printf("true");
return r1;
}
else
{
printf("NOT TRUE");
}
}
