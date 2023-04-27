#include<stdio.h>
#include<stdlib.h>

int euclideanAlgo(int divisor,int divide_value)
{
int g;
while(1)
{
if(divide_value%divisor==0)
{
break;
}
else
{
g=divide_value%divisor;
divide_value=divisor;
divisor=g;
}
} // euclidean algo
return divisor;
}

int algo(int *x,int size)
{
int divide_value,divisor,hcf,i,elem;
if(x[0]<x[1])
{
divide_value=x[1];
divisor=x[0];
}
else
{
divide_value=x[0];
divisor=x[1];
}
hcf=euclideanAlgo(divisor,divide_value);
i=2;
while(i<size)
{
elem=x[i];
i++;
if(elem<hcf)
{
divisor=elem;
divide_value=hcf;
}
else
{
divisor=hcf;
divide_value=elem;
}
hcf=euclideanAlgo(divisor,divide_value);
} // outerloop
return hcf;
}

int main(int c,char *v[])
{
int i,j,hcf,size;
int *x;
size=c-1;
x=(int *)malloc(sizeof(int)*size);
i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);
hcf=algo(x,size);
printf("GCD: %d\n",hcf);
free(x);
return 0;
}
