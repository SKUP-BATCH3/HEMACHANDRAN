#include<stdio.h>

int a[5]={1,5,1,2,3},i,count=0;
int main()
{
for (i=0;i<=5;i++)

    if (a[i]==1&&a[i+1]==2&&a[i+2]==3)
    count++;
    if (count>=1)

printf("in sequence\n");

else
printf("not in sequence\n");

}
