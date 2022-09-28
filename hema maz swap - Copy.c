#include<stdio.h>
char swap(char*,char*);
char a='h',b='m',temp=0;
char main()
{
    printf("Before swapping:\n a,b\n \n \n \n     [a=%c\t b=%c]\n\n\n",a,b);
swap(&a,&b);
}
char swap(char*a,char*b)
{
temp=*a;
*a=*b;
*b=temp;
printf("After swapping:\n a,b\n \n \n \n     [a=%c\t b=%c]\n\n\n",*a,*b);

}
