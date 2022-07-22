#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i<4)
            {
                if(j>3-i && j<17+i)
                {
                    if(j>6+i && j<14-i)
                        printf(" ");
                    else
                        printf("*");
                }
                else
                    printf(" ");
            }
            else if(i==4)
            {
                if(j>=1 && j<=6)
                    printf("*");
                else if(j==7)
                    printf("MySirG");
                else if(j<15)
                    printf("*");
            }
            else if(j>1+i-5 && j<19-i+5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
