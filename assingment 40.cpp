#include<stdio.h>
int sum(int n)
{
        if(n!=0)
        return n+sum(n-1);
}
int main()
{
        int n;
        printf("Enter the value of n");
        scanf("%d", &n);
        printf("The sum of %d number=%d", n, sum(n));
        return 0;
}
