#include<stdio.h>
void main()
{
int m1[3][3],m2[3][3],m3[3][3],i,j;
printf("enter the elements of frist matrix \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m1[i][j]);
}
printf("enter the elements of second matrix \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d",&m2[i][j]);
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
m3[i][j]=m1[i][j]*m2[i][j];
}
printf("matrix after addition \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",m3[i][j]);
}
printf("\n");
}
}
