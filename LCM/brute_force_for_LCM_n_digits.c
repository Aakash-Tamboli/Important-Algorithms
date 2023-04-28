#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
int *x,*aux;
int size;
int largest;
int outer_flag,inner_flag,ans,i,j;
if(c<=1)
{
printf("Please Pass values\n");
return 0;
}
size=c-1;

x=(int *)malloc(sizeof(int)*size);
// I assume memory allocated
aux=(int *)malloc(sizeof(int)*size);
// I assume memory allocated

i=0;
for(j=1;j<c;j++) x[i++]=atoi(v[j]);
ans=1;

while(1)
{
outer_flag=0;

largest=x[0];
for(i=1;i<size;i++) if(largest<x[i]) largest=x[i];

for(i=2;i<=largest;i++)
{
inner_flag=0;
for(j=0;j<size;j++)
{
if(x[j]%i==0)
{
aux[j]=x[j]/i;
inner_flag=1;
}
else
{
aux[j]=x[j];
}
}
if(inner_flag)
{
ans=ans*i;
for(j=0;j<size;j++) x[j]=aux[j];
outer_flag=1;
break;
}
}
if(outer_flag==0) break;
}

printf("LCM: %d\n",ans);
free(x);
free(aux);
return 0;
}
