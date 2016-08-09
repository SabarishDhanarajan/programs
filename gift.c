#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int a[100][100];
    int n,m;
    int i,j,k=0,l=0,x;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k+=a[0][0];
    for(i=0,j=0;i!=n&&j!=m;)
    {
        if(a[i+1][j]>a[i][j+1])
        {
            i++;
            k+=a[i][j];
        }
        else
        {
            j++;
            k+=a[i][j];
        }
    }
    printf("%d",k);
    return 0;
}
