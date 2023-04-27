#include<stdio.h>

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

int main()
{
int hcf,size;
int x[3]={18,24,30};
size=3;
hcf=algo(x,size);
printf("GCD: %d\n",hcf);
return 0;
}
