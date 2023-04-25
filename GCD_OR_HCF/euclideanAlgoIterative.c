#include<stdio.h>
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

while(1)
{
remainder=divide_value%divisor;
if(remainder==0)
{
printf("HCF: %d\n",divisor);
break;
}
else
{
divide_value=divisor;
divisor=remainder;
}
}
return 0;
}
