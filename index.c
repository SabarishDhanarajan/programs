#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[]={-3,-2,1,3,4,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j=0,k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            j++;
            printf("%d\t",i);
        }
        else
        {
            k=j;
        }
        if(k==j&&k>0)
        {
            break;
        }
    }
    return 0;
}
