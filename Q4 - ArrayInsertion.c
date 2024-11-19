#include<stdio.h>
int main()
{
int a[10],i,n,in,pos;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the numbers:  ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the number to be instered: ");
scanf("%d",&in);
printf("Enter the position of the number: ");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
for(i=0;i<n+1;i++)
printf("%d\n",a[i]);
}
