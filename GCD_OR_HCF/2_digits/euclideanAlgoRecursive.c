#include<stdio.h>
void recursive(int divide_value,int divisor)
{
int remainder;
remainder=divide_value%divisor;
if(remainder==0)
{
printf("GCD: %d\n",divisor);
}
else
{
recursive(divisor,remainder);
}
}
int main()
{
int num1,num2,divisor,divide_value,remainder;
printf("Enter a number: ");
scanf("%d",&num1);
printf("Enter another number: ");
scanf("%d",&num2);
if(num1<num2)
{
divisor=num1;
divide_value=num2;
}
else
{
divisor=num2;
divide_value=num1;
}
recursive(divide_value,divisor);
return 0;
}
