#include<stdio.h>
int main() {
int i,j,max,count,maxcount=0;
char a[100]="mmamazad";
//printf("enter the string:\n");
//scanf("%c",&a[100]);
for(i=0;i<strlen(a);i++)
{
count=0;
}
for(j=0;j<strlen(a);j++)
{
if(a[i]=a[j]){
count++;
}

if(count>maxcount){
maxcount=count;
max=a[i];
}
printf("%c %c",max,maxcount);
}
}
