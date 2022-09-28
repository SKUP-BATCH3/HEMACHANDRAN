#include<stdio.h>
int square(int);
int res;
int a=5;

int main()
{
res=square(a);
printf("%d",res);
}
int square(int a)
{
res=a*a;
return res;
}
