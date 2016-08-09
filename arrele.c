#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],b[100];
    int n;
    int i,j,k=0,x=0;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((a[i*2]+a[j*2])-a[k*2]==0)
                {
                    x=1;
                    break;
                }
            }
            if(x==1)
            break;
        }
        if(x==1)
        break;
    }
    printf("%d\t%d\t%d",i,j,k);
    return 0;
}
