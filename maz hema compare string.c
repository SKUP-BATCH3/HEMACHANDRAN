#include<stdio.h>
main()
{
char a[7]="string",b[7]="string";
int i;
for(i=0;i<7;i++)
if(b[i]==a[i])
printf("both string is similar");
else
    printf("both string is different");
}
