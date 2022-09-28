#include<stdio.h>
int main()
{
int a,b,r;
printf("enter two integers\n");
scanf("%d %d",&a,&b);
r=a==5||b==5||(a+b)==5||(a-b)==5;
return r;
}
