#include<stdio.h>
int main(){
int i,c,p,l;
char a[10],b[10];
printf("enter the position:\n");
//gets(a,sizeof a,stdin);
//printf("enter the position:\n");
scanf("%c",&p);
printf("enter the length:\n");
scanf("%c",&l);
if(c<1){
 b[c]=a[c+p-1];
 c++;
 b[c]='\0';
}
printf("%c %c",b[i],a[i]);
}

