#include<stdio.h>
int elements(int[],int);
int a[],i,m;
void main(){
elements(a,m);
}
int elements(int a[],int m)
{

printf("enter the no elements:\n");
scanf("%d",&m);
printf("enter the elements:\n");
for(i=0;i<m;i++){
    scanf("%d",&a[i]);
}
if(a[i]==1&&a[i+1]==2&&a[i+2]==3)
{
printf("its in sequence");
}
else
{
printf("not in sequence");
}

}
