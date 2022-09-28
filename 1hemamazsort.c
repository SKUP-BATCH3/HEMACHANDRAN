#include<stdio.h>
int main()
{
int i,j,a,n,num[20];
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("enter the number");
for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(num[i]>num[j]){
a=num[i];
num[i]=num[j];
num[j]=a;
}}}
for(i=0;i<n;i++)
printf("%d",num[i]);
}
