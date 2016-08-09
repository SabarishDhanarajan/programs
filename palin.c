#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int a[100],b[100];
    int n;
    int i,j,k=0,l=0,x;
    scanf("%d",&n);
     while(n!=0)
     {
         k+=n%10;
         n=n/10;
     }
     for(i=0;k!=0;i++)
     {
         a[i]=k%10;
         k/=10;
         l++;
     }
     for(i=0;i<l/2;i++)
     {
         if(a[i]==a[l-i-1])
         {
             k=0;
         }
         else
         {
             k=1;
             break;
         }
     }

     if(k==0)
     {
         printf("Palindrome");
     }
     else if(k==1)
     printf("Not Palindrome");
    return 0;
}
