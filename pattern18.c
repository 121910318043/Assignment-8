#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
       for(j=1;j<=9;j++)
    {
        if(i<5)
        {
            if(j>5-i && j< 5+i)
                printf("*");
            else
                printf(" ");
        }
        else if(j>=1+i-5 && j<10-i+5)
        {
            printf("*");
        }
        else
            printf(" ");
    }
    printf("\n");
    }
    return 0;
}
