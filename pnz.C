#include<stdio.h>
int main()
{
int x;
printf("Enter the value of x");
scanf("%d",&x);
if(x>0)
{
printf("The given number is positive");
}
else if(x<0)
{
printf("The given number is negative");
}
else
{
printf("The given number is zero");
}
return 0;
}
