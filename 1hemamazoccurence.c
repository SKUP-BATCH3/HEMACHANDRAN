#include<stdio.h>
int main(){
char a[100],res;
int b[256]={0};
int len,i;
int max=-1;

printf("enter the string:\n");
gets(a);
len=strlen(a);
for(i=0;i<(len);i++)
{
b[a[i]]++;
}
for(i=0;i<len;i++){
if (max<b[a[i]]){
        max<b[a[i]];
res=a[i];
}
}
printf("\nmax=%c",res);
return 0;
}
