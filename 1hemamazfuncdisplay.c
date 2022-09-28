#include<stdio.h>
int elements(int[],int);
int a[],i,m;
void main(){
elements(a,m);
}
int elements(int a[],int m)
{
printf("enter the number of elements:\n");
scanf("%d",&m);
printf("enter the elements:\n");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<m;i++)
printf("%d\t",a[i]);
}
