#include<stdio.h>
int fact(int n)
{
        if(n>1)
        return n*fact(n-1);
        else
        return n;
}
int main()
{
        int n;
        printf("Enter the value of n ");
        scanf("%d", &n);
        printf("The factorial of %d is %d", n, fact(n));
        return 0;
}
