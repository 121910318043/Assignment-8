#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter 5 or any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<n)
            {
            if(j>=n+1-i)
            {
                if(j>n+1-i && j<n)
                printf(" ");
                else
                printf("*");
            }
            else
                printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
