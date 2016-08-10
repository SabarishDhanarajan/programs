#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,n=0,x,z,a[100];
    scanf("%d",&x);
    scanf("%d",&k);
    for(i=0;x!=0;i++)
    {
        a[i]=x%10;
        x/=10;
        n++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
    }
    n=n-k;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
