#include<stdio.h>
int main() {
char i,n,a[i],*ptr;
printf("enter the n elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=a[n];
for(i=0;i<n;i++)

printf("%d",*ptr);
}
