#include<stdio.h>
int func(int m,int l)
{
int prev,i;
i=1;
while(1)
{
prev=m;
m=m*i;
if(m>l)
{
break;
}
i++;
}
return prev;
}
int main()
{
int num1,num2,divisor,ans,new_divisor,divide_value,g;
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
ans=func(divisor,divide_value);
new_divisor=divide_value-ans;
if(new_divisor==0)
{
printf("%d is GCD or HCF\n",divisor);
return 0;
}
else
{
g=divisor;
divisor=new_divisor;
divide_value=g;
}        
}
return 0;
}
