#include<stdio.h>
int main(){
    int i,count=0;
char a[10];
printf("enter the string:\n");
gets(a);
for(i=0;i<strlen(a);i++)
    if(a[i]==';'||a[i]==','||a[i]=='.'||a[i]=='?'||a[i]=='-'||a[i]=='!'||a[i]=='"')

count++;
printf("%d",count);

}
