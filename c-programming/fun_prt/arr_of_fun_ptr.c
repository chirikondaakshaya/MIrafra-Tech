#include<stdio.h>

int add(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;
}

int div(int a,int b)
{
return a/b;
}

int mod(int a,int b)
{
return a%b;
}

int main()
{
int a=10,b=20;
int (*fptr[5])(int,int)={add,sub,mul,div,mod};

for(int i=0;i<5;i++)
{
if(i==0)
printf("add-%d\n",fptr[i](a,b));
if(i==1) 
printf("sub-%d\n",fptr[i](a,b));
if(i==2)
printf("mul-%d\n",fptr[i](a,b));
if(i==3)
printf("div-%d\n",fptr[i](a,b));
if(i==4)
printf("mod-%d\n",fptr[i](a,b));
}
//printf("add-%d\n",add(a,b));

return 0;
}

