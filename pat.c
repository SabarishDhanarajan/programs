#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int a[100][100],b[100][100];
    int n,m;
    int i,j,k=0,l=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                for(k=0;k<n;k++)
                {
                    b[i][k]=0;
                }

                for(k=0;k<n;k++)
                {
                    b[k][j]=0;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
   return 0;
}
