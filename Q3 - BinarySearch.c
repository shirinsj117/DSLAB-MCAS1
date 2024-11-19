#include<stdio.h>
void main()
{
int n,i,a[100],s,left,right,middle;
printf("Enter the size of array: ");
scanf("%d", &n);
printf("Enter the %d elements in array\n",n);
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the number to be searched : ");
scanf("%d",&s);
for(i=0; i<n; i++)
{
left=0;
right=n-1;
}
while(left<=right)
{
middle=(left+right)/2;
if (a[middle]==s)
{
printf("%d is present at the location %d.\n",s,middle);
break;
}
else if (a[middle]>s)
{
right=middle-1;
}
else
{
left=middle+1;
}
if(left>right)
{
printf("Element not found in the list");
}
}
}

