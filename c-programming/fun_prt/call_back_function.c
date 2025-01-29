#include<stdio.h>

int add(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int cbfptr(int (*fptr)(int,int),int a , int b)
{
fptr(a,b);
}

int main()
{
    int a=10,b=5;
printf("add-%d\n",cbfptr(&add,a,b));
printf("sub-%d\n",cbfptr(&sub,a,b));

    return 0;
}
