#include<stdio.h>
int main() {
int i,j;
char a[10]="mazharR";
for(i=0;i<10;i++){
if(a[i]>='a'&&a[i]<='z'){
a[i]=a[i]-32;
}
else{
a[i]=a[i]+32;
}

printf("%c",a[i]);
}
}
