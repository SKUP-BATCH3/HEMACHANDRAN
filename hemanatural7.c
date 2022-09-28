//07

#include<stdio.h>
int main() {
int odd,n,sum,i;
printf("enter the max number\n");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
odd=((2*i)-1);
sum=sum+odd;

printf("odd=%d\n",odd);
printf("sum=%d\n",sum);
}
return 0;
}
