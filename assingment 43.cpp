#include<stdio.h>
int sum(int n)
{
        int s=0,i;
        for(i=1;i<=n;i++)
        {
        s= s+(i*i);
    }
    return s;
}
int main()
{
        int n;
        printf("Enter the n term ");
        scanf("%d", &n);
        printf("Sum of squares of %d natural numbers is %d ", n, sum(n));
}
