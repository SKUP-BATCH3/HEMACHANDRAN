#include<stdio.h>
int main()
{
    int x,y,z,size;
int i,j,k,a[x][y][z];
printf("enter the size:\n");
scanf("%d %d %d",&x,&y,&z);
printf("enter the values of elements:\n");

for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        for(k=0;k<z;k++){
            scanf("%d",&a[i][j][k]);
        }
    }
}
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        for(k=0;k<z;k++){

printf("%d\n",a[i][j][k]);
        size=sizeof(a);
        printf("size=%d",sizeof(a));
}
