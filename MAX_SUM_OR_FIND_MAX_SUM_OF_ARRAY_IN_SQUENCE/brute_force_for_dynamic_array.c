#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
int *x;
int max,sum,e,f,lb,ub,size,i,j;
if(c<=1)
{
printf("Please Pass values\n");
return 0;
}

size=c-1;
x=(int *)malloc(sizeof(int)*size);
i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);
lb=0;
ub=size-1;
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
