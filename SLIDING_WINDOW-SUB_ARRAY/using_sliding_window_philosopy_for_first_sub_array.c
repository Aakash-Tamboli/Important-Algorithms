#include<stdio.h>
int main()
{
int e,f,sum,max,i,size,flag;
int x[6]={3,3,-1,22,5,8};
size=6;
max=27;

e=0;
f=0;
sum=0;
flag=0;
while(f<size)
{
if(x[f]>max)
{
sum=0;
f++;
e=f;
}
else if(sum+x[f]>max)
{
if(sum-x[e]<0) sum=0;
else sum=sum-x[e];
e++;
}
else if(sum+x[f]==max)
{
flag=1;
break;
}
else
{
sum=sum+x[f];
f++;
}
}
if(flag==1)
{
for(i=e;i<=f;i++) printf("%d ",x[i]);
printf("\n");
}
else
{
printf("There is No sub array present whose sum is %d\n",max);
}
return 0;
}
