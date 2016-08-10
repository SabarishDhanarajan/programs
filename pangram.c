#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[1000],b,c[1000];
    int i,j,k,l,m,n,x,y,cnt=0,z,flag=0;
    scanf("%[^\n]s",a);
    l=strlen(a);
     for(i=0;i<l;i++)
        {
            x=32;
            if(a[i]<97)
            {
                x+=a[i];
                a[i]=(char)x;
            }
        }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>='A')
        {
            c[cnt]=a[i];
            cnt++;
        }

    }
    m=strlen(c);

        a[0]=c[0];
        cnt=1;
        for(i=1;i<m;i++)
        {
            if(c[i]!=c[i-1])
                {
                    a[cnt]=c[i];
                    cnt++;
                }

        }

        for(i=0;i<cnt;i++)
        {
            x=32;
            if(a[i]<97)
            {
                x+=a[i];
                a[i]=(char)x;
            }
        }

        for(i=0;i<26;i++)
        {
            if(a[i]==i+97){}
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("\nnot a panagram");
        }
        else if(flag==0)
        {
            printf("\n Panagram");
        }
    return 0;
}
