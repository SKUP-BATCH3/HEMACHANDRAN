#include<stdio.h>
int main()
{
int a,b,smallest=0,largest=0;
printf("enter 2 integers\n");
scanf("%d %d",&a,&b);
if(a>b)
{
    largest==a;
    smallest==b;
    printf("largest=%d\n",a);
       printf("smallest=%d\n\n   ",b);
}
else
{
    largest==b;
    smallest==a;
     printf("largest=%d\n",b);
      printf("smallest=%d\n\n",a);
}
//printf("largest=%d",largest);

if(a%5==b%5)
{
    printf("small=%d",smallest);
return smallest;
}
else if(a==b)
{
    printf("both are same");
return 0;
}
}
