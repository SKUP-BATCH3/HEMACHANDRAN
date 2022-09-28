//square of n numbers and sum
#include<stdio.h>
int main() {
int square,n,sum,i;
printf("enter the nth number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
square=i*i;
sum=sum+square;

printf("square=%d\n",square);
printf("sum=%d\n",sum);
}
return 0;
}
