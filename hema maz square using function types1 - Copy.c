#include<stdio.h>
int square();
int res;
int a=5;

int main()
{
res=square();
printf("%d",res);
}
int square()
{
res=a*a;
return res;
}
