#include<stdio.h>
int main() {
int a,b,sum;
printf("enter the number:\n");
scanf("%d %d",&a,&b);
sum=a+b;
printf("%d",sum);
if(sum>=10 && sum<=20)
return 30;
}
