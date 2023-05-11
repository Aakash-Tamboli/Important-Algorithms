#include<stdio.h>
int main()
{
int sLb,sUb,f,e,lMax,max; // sLb means sub-lower_bound , sUb means sub-upper_bound
int x[8]={-2,-3,4,-1,-2,1,5,-3};
max=7;
int found;
e=0;
while(e<=6)
{
sLb=e;
sUb=e;
lMax=x[e];
f=e+1;
found=0;
while(f<=7)
{
if(lMax+x[f]==max)
{
sUb=f;
found=1;
break;
}
lMax+=x[f];
f++;
}
if(found) break;
e++;
}
printf("Sub-Array whose max is %d\n",max);
for(e=sLb;e<=sUb;e++) printf("%d ",x[e]);
printf("\n");
return 0;
}
