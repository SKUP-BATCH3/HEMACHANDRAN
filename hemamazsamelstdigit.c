#include<stdio.h>
int main() {
int num1,num2;
printf("enter the value of num1 and num2:\n");
scanf("%d %d",&num1,&num2);
if (num1%10==num2%10)
printf("last digit same");
else
printf("last digit not same");
return 0;
}
