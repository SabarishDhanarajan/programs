#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[]={1,2,3,4,5,4,3,2,1};
    int n=9;
    int i,j,k,x=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            x-=a[i];
        }
        else
        {
            x+=a[i];
        }
    }
    printf("%d",x);
    return 0;
}
