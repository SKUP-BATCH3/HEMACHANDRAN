#include<stdio.h>
int main() {
int i,j,result;
for(i=2;i<=10;i++)
{
    printf("%d\n",i);

for(j=1;j<=10;j++)
{
    printf("%d\n",j);

result=i*j;
printf("table=result\n",result);
}
}
return 0;
}
