#include<stdio.h>
void main() {
int a[10],i,odd=0,even=0;
printf("enter the number of elements:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]%2==0)
even=even+1;
else
odd=odd+1;
}
printf("even=%d",even);
printf("odd=%d",odd);
}
