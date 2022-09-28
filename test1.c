#include<stdio.h>
int main() {
int even,n,sum,i;
printf("enter the max number\n");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
even=(2*i);
sum=sum+even;

printf("even=%d\n",even);
printf("sum=%d\n",sum);
}
return 0;
}
