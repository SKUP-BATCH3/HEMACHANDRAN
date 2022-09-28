#include<stdio.h>
void swap();

void main()
{
swap();
}
void swap()
{
    int a=10,b=20,c;
c=a;
a=b;
b=c;
printf("%d %d",a,b);
}
