#include<stdio.h>
#include<stdlib.h>

int euclideanAlgo(int divisor,int divide_value)
{
int g;
if(divisor>divide_value)
{
g=divisor;
divisor=divide_value;
divide_value=g;
}

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

int main(int c,char *v[])
{
int *x;
int size;
int HCF,LCM;
int i,j;
long long product_of_all_numbers;
if(c<=2)
{
printf("Please at least two or more values\n");
return 0;
}
size=c-1;
x=(int *)malloc(sizeof(int)*size);
i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);
HCF=euclideanAlgo(x[0],x[1]);
LCM=(x[0]*x[1])/HCF;

if(size>2)
{
i=2;
while(i<size)
{
HCF=euclideanAlgo(x[i],LCM);
LCM=(x[i]*LCM)/HCF;
i++;
}
}

printf("LCM: %d\n",LCM);
free(x);
return 0;
}
