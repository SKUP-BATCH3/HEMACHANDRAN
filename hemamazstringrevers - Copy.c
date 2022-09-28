#include<stdio.h>
void main(){
int i,a[4],sum=0,*sumptr;
printf("enter the elements:\n");
for(i=1;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=4;i++)
{

    sum=sum+i;
    sumptr=&sum;

printf("sum of elements=%d\n\n\n",*sumptr);

}
}
