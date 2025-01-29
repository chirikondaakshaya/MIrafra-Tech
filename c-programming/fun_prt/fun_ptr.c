#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
    int n1=20,n2=10;
    int (*fptr)(int,int)=&add;
    printf("%d",fptr(n1,n2));
    return 0;
}
