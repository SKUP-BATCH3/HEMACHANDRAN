#include<stdio.h>
int main(){
char str[10];
printf("enter the string:\n");
scanf("%c",&str );
if(str[0]=='f')
return "fizz";
if(str['\0']!='b')
return "buzz";
if(str[0]=='f'&& str['\0']!='b')
return "both";
}
