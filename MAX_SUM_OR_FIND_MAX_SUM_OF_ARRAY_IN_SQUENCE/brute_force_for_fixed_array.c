#include<stdio.h>
int main()
{
int x[6]={10,-2,7,-6,-9,3};
int max,sum,e,f,lb,ub;

lb=0;
ub=5;
e=0;
max=0;
while(e<=ub)
{

sum=x[e];
f=e+1;
while(f<=ub)
{
sum+=x[f];
if(max<sum)
{
max=sum;
}
f++;
}
e++;
}
printf("Max is : %d\n",max);
return 0;
}
