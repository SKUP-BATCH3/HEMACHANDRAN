#include<stdio.h>
int (*ptr)(int,int);
int sub(int ,int );
int a=2,b=3;
void main()
{
    int result;
    int (*ptr)(int,int)=&sub;
result=(*ptr)(a,b);
printf("%d",result);
}
int sub(int a,int b)
{
    int res;

res=a-b;
//return sub;
}
