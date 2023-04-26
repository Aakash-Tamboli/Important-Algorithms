#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
int *x,*aux;
int size;
int smallest;
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

smallest=x[0];
for(i=1;i<size;i++) if(smallest>x[i]) smallest=x[i];

for(i=2;i<=smallest;i++)
{
inner_flag=1;
for(j=0;j<size;j++)
{
if(x[j]%i==0)
{
aux[j]=x[j]/i;
}
else
{
inner_flag=0;
break;
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


printf("HCF: %d\n",ans);
free(x);
free(aux);
return 0;
}
