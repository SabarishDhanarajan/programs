#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int n;
    int i,j,k=0,x;
    scanf("%d",&n);
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[j]);
      }
      scanf("%d",&x);
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(a[i]+a[j]-x==0)
              {
                  printf("%d\t%d",a[i],a[j]);
                  k=1;
                  break;
              }
          }
          if(k==1)
          break;
      }

    return 0;
}
