#include<stdio.h>
int digitaltime()

{
int hrs,min,sec;
printf("enter the hours\n");
scanf("%d",&hrs);
printf("enter the minutes\n");
scanf("%d",&min);
printf("enter the seconds\n");
scanf("%d",&sec);
printf("%d %d %d",hrs,min,sec);
}
int localtime(){
digitaltime();
}
int main(){
localtime();
}

