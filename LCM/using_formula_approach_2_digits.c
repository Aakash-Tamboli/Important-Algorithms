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
} // loop
return hcf;
}

int main(int c,char *v[])
{
int x[2];
int size;
int HCF,LCM;
int i,j;
long long product_of_all_numbers;
if(c<=1 || c>=4)
{
printf("Please Pass Only Two values\n");
return 0;
}
size=2;
i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);
product_of_all_numbers=x[0];
for(i=1;i<size;i++) product_of_all_numbers*=x[i];
HCF=algo(x,size);
LCM=product_of_all_numbers/HCF;
printf("LCM: %d\n",LCM);
return 0;
}
