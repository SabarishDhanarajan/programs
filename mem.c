#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],b[100];
    int n;
    int i,j,k,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    printf("4 th tallest is %d th person and his hieght is %d",b[3]+1,a[3]);
    printf("\nenter the Kth value\n");
    scanf("%d",&k);
    printf("4 th tallest is %d th person and his hieght is %d",b[k]+1,a[k]);
    return 0;
}
