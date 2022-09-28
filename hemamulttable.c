#include<stdio.h>
int main() {
int num,i,result;
printf("enter the number:\n");
scanf("%d",&num);

for(i=1;i<=10;i++)
    {
result=num*i;
printf("result=%d",result);
}
return 0;
}
