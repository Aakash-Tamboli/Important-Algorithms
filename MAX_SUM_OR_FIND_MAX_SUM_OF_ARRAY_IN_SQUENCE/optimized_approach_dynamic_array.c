#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
int *x;
int localMax,globalMax,size,i,j;
if(c<=1)
{
printf("Please Pass values\n");
return 0;
}
size=c-1;
x=(int *)malloc(sizeof(int)*size);
i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);

localMax=x[0];
globalMax=x[0];

for(i=1;i<size;i++)
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
printf("Max sum is: %d\n",globalMax);
return 0;
}
