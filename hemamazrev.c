#include<stdio.h>
int main() {
char s1[20]="mohammed";
int *sptr;
strrev(s1);
sptr= strrev(s1);
printf("%s",*sptr);
}
