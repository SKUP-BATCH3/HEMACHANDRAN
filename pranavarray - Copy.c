#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},b[5],n,i,j;
for(j=4;j>=0;)
    for(i=0;i<=4;i++,j--)
        b[j]=a[i];

    for(i=0;i<5;i++)
        printf("a[5]=%d\tb[5]=%d\n",a[i],b[i]);
}
