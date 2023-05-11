#include<stdio.h>
int main()
{
int sLb,sUb,e,lMax,max;// sLb means sub-lower_bound , sUb means sub-upper_bound
int x[6]={10,-2,7,-6,-9,3};
max=15;
sLb=0;
sUb=0;
lMax=x[0];
e=1;
while(e<=5)
{
if(x[e]>lMax+x[e])
{
sLb=e;
lMax=x[e];
}
else
{
lMax=lMax+x[e];
}

if(lMax==max)
{
sUb=e;
break;
}
e++;
}
printf("Sub-Array whose max is %d\n",max);
for(e=sLb;e<=sUb;e++) printf("%d ",x[e]);
printf("\n");
return 0;
}
