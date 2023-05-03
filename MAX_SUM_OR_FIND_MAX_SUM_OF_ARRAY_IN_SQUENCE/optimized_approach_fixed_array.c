#include<stdio.h>
int main()
{
int x[6]={10,-2,7,-6,-9,3};
int globalMax,localMax;
int i;

globalMax=x[0];
localMax=x[0];

for(i=1;i<=5;i++)
{
if(x[i]<(localMax+x[i]))
{
localMax=localMax+x[i];
}
else
{
localMax=x[i];
}
if(localMax>globalMax)
{
globalMax=localMax;
}
}
printf("Max sum is : %d\n",globalMax);
return 0;
}
