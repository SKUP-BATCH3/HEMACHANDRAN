#include<stdio.h>
int main() {
char a[100];
printf("enter the character:\n");
scanf("%[^\n]s",a);
printf("%s\n",a);
}

