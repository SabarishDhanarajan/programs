#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],b[100];
    int n;
    int i,j,k=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        for(j=0;j<i;j++)
        {
            if(b[j]==a[i])
            {
                printf("%d",b[j]);
                k=1;
                break;
            }
        }
        if(k==1)
        {
            break;
        }
    }

    return 0;
}
