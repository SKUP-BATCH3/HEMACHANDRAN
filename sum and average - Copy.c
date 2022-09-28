//sum & average of 10 numbers

#include<stdio.h>
int main() {
int a,b,c,d,e,f,g,h,i,j,sum,average;
printf("enter 10 inputs from keyboard:\n");
scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
sum=a+b+c+d+e+f+g+h+i+j;
average=sum/10;
printf("sum=%d",sum);
printf("average=%d",average);
return 0;
}
