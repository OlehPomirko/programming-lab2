#include<stdio.h>
#include<math.h>
int f(int in)
{
int out=1;
for(int i= in; i>1;i--)
{
out*=i;
}
return out;
}
int main(void)
{
int n=10;
double r=0;
while(n>0)
{
r+=f(n)/pow(n,sqrt(n));
n--;
}
printf("%f\n",r);
}