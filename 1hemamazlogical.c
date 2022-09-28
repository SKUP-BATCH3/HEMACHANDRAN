#include<stdio.h>
int main(){
int a,b,k,r,r1,r2,r3,c;
printf("enter the values of a b and k:\n");
scanf("%d %d %d",&a,&b,&k);
r=a|b;
printf("%d\n",r);
r1=a^b;
printf("%d\n",r1);
{
if (r<k && r1<k)
    if(r>=r1)
a=r;
else if(r<=r1)
    a=r1;
r2=a&b;
}
printf("%d\n",r2);
}
