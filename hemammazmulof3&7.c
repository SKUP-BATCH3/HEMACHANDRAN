#include<stdio.h.>
int main() {
int num;
printf("enter the number:\n");
scanf("%d",&num);
if (num%3==0||num%7==0)
printf("its a multiple of 3 and 7");
else
printf("not a multiple of 3 and 7");
return 0;
}
