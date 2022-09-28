#include<stdio.h>
int main(){
int loan,b1,b2,t,emi1,emi2;
printf("enter the loan:\n");
scanf("%d",&loan);
printf("enter the bank1:\n");
scanf("%d",&b1);
printf("enter the bank 2:\n");
scanf("%d",&b2);
printf("enter the tenture:\n");
scanf("%d",&t);
emi1=loan*b1/(1-1/1+b1)^(t*12);
emi2=loan*b2/(1-1/1+b2)^(t*12);
if(emi1<emi2){
printf("prefer bank 1:\n");
}
else{
printf("prefer bank 2:\n");
}
}
