#include<stdio.h>
int main(){
int n,e,c=0,i,j;
printf("enter the number of elements you want to enter\n");
scanf("%d",&n);
int a[n], b[n];
printf("enter %d elements for 1st array",n);
{
scanf("%d", &e);
a[i]=e;
}
for(int i=0,j=i+1;i<n,j<n;i++,j++)
if(a[i]!=a[j])
{
printf("%d\n", a[i]);
}
}
