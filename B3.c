#include<stdio.h>
void main()
{
    int i,j,x=5,n;
    for(i=x;i>=1;i--)
    {
        for(j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(n=1;n<=2*i-1;n++)
        {
            printf("*");
        }
        printf("\n");
    }
}