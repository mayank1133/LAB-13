#include<stdio.h>
void main()
{
    int i,j,x=5,n;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}