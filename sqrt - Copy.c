//square of number
#include<stdio.h>
#include<math.h>
int main() {
int square,n,sum,i,sqrt;
printf("enter the nth number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sqrt=sqrt(i);
sum=sum+sqrt;

printf("square=%d\n",sqrt);
printf("sum=%d\n",sum);
}
return 0;
}
