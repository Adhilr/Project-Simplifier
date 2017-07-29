#ifndef _MY_H
#define _MY_H

int is_prime(int n)
{
int j,i;
if(n<0)
  return 0;
else if(n>3)
{
 i=sqrt(n)+1;
 for(j=2;j<i;j++)
   if(isprime(j))
    if(n%j==0)
     return 0;
 
  return 1;
}
else
 return 0;
}

int fib(int n)
{
int a=-1,b=1,c,i;
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
}
return c;
}


int rev(int n)
{
int temp=0;
while(n>0)
{
temp=(temp*10) +(n%10);
n=n/10;
}
return temp;
}


int iseven(int n)
{
if(n%2==0)
 return 1;
else
 return 0;
}


int sum_arr(int a[],int i, int j)
{
int n,sum=0;
for(n=i;n<=j;n++)
 sum+=a[n];
return sum;
}


#endif