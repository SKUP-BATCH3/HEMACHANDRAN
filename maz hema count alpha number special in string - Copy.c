//maz hema count alpha number special in string
#include<stdio.h>
#include<ctype.h>
int main()
{
char st[50]="apples@123";
int al=0,d=0,s=0,i;

for(i=0;i!='\0';i++){
if((st[i]>='a' && st[i]<='z')||(st[i]>='A' && st[i]<='B'))
{
al=al+1;
}
else if(st[i]>='0' && st[i]<='9')
{
d=d+1;
}
else
{
s=s+1;
}}
printf("The number of alphabet in the strings are=%d\n",al);
printf("The number of digits in the strings are=%d\n",d);
printf("The number of special characters in the strings are=%d\n",s);
}
