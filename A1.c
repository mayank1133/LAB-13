#include<stdio.h>
void main()
{
    int i,j,x=5;
    for(i=x;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}