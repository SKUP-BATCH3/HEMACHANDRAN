#include<stdio.h>
int main(){
int i,n,j,a,num[20];
printf("enter the number:\n");
scanf("%d",&n);

printf("enter the elements\n");
for(i=0;i<n;++i)
    scanf("%d",&num[i]);

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(num[i]>num[j])
    {
a=num[i];
num[i]=num[j];
num[j]=a;
    }
}
}
printf("sorting in order\n");
for(i=0;i<n;i++)
printf("%d\n",num[i]);
}
