#include<stdio.h>
int main(){
int math,phy,chem,total,total1;
printf("enter the marks for maths:\n");
scanf("%d",&math);
printf("enter the marks for physics:\n");
scanf("%d",&phy);
printf("enter the marks for chemistry:\n");
scanf("%d",&chem);
total=math+phy+chem;
total1=math+phy;
if((math>=65&&phy>=55&&chem>=50)&&(total>=190||total1>=140))
{
printf("candidate is eligible:\n");
}
else{
printf("candidate is not eligible:\n");
}
}
