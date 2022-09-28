#include<stdio.h>
int main(){
int n;
printf("enter the n integer:\n\n");
scanf("%d",&n);

if (n%3==0){
printf("fizz\n\n");
}
if (n%5==0){
printf("Buzz\n\n");}

if (n%3==0&&n%5==0){
printf("Fizz Buzz\n\n");
}

if(n==6)
{
   printf("!six\n");
}
}
