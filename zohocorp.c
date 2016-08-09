#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],x[50]="welcometozohocorporation",y[50][50];
    int i,j,k=0,n,m,z,flag;
    n=strlen(x);
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
     if(k<n)
     {
     y[i][j]=x[k];
     k++;
     }
    }
    }
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
        printf("%c ",y[i][j]);
    }
    printf("\n");
    }
    printf("\nenter the substring");
    scanf("%s",s);
    z=strlen(s);
    for(i=0;i<5;i++)
    {
        k=0,flag=0;
    for(j=0;j<5;j++)
    {
        if(s[k]==y[i][j])
        {
            if(k==z-1)
            {   flag=1;
                break;
            }
            k++;
        }
        else
        {
            k=0;
        }
    }
    if(flag==1)
    {
        printf("start index : <%d,%d>\n",i,j-z+1);
        printf("end index : <%d,%d>",i,j);
    }
    }
     for(j=0;j<5;j++)
    {
        k=0,flag=0;
    for(i=0;i<5;i++)
    {
        if(s[k]==y[i][j])
        {
            if(k==z-1)
            {   flag=1;
                break;
            }
            k++;
        }
        else
        {
            k=0;
        }
    }
    if(flag==1)
    {
        printf("start index : <%d,%d>\n",i-z+1,j);
        printf("end index : <%d,%d>",i,j);
    }
    }
    return 0;
}
