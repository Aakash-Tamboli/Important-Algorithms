#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
int x[3]={atoi(v[1]),atoi(v[2]),atoi(v[3])};
int aux[3];
int smallest;
int outer_flag,inner_flag,ans,i,j;
ans=1;

while(1)
{
outer_flag=0;

smallest=x[0];
for(i=1;i<=2;i++) if(smallest>x[i]) smallest=x[i];

for(i=2;i<=smallest;i++)
{
inner_flag=1;
for(j=0;j<=2;j++)
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
for(j=0;j<=2;j++) x[j]=aux[j];
outer_flag=1;
break;
}
}
if(outer_flag==0) break;
}

printf("HCF: %d\n",ans);
return 0;
}
