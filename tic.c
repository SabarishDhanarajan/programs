#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void struc(char a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("_%c_|",a[i][j]);
        }

        if(i==2)
        {
            printf("\b\b\b\b\b\b\b\b\b\b\b\b");
            for(j=0;j<3;j++)
            {
                printf("%c%c%c|",' ',a[i][j],' ');
            }
            printf("\b%c",' ');
        }
        else
        {
            printf("\b%c\n",' ');
        }
    }
    printf("\n\n**************************************************\n\n");
}
    int input(int n,int a[9])
    {
        int c,f,i;
         while(1)
        {
            scanf("%d",&c);
            if(c>9||c<1)
            {

                printf("enter the correct value\n");
                continue;
            }
            else
            {f=0;
             for(i=0;i<n;i++)
             {
                 if(c==a[i]||c==(-a[i]))
                 {
                     f=1;
                      printf("enter the correct value\n");
                     break;
                 }
             }
             if(f==1)
             continue;
             else
             break;
            }
        }
        return c;
    }

int systemin(int n,int a[9])
{
    srand(time(NULL));
    int r,f,i;
   while(1)
   {
        f=0;
       r = rand();
       r=r%9;
       r=r+1;
                for(i=0;i<n;i++)
             {
                 if(a[i]==r||a[i]==-r)
                 {
                     f=1;
                     break;
                 }
             }
             if(f==1)
             continue;
             else
             break;
   }
   return r;
}
int check1(int n,int d[5])
{
    int i,j,a[3][3],t=1;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           a[i][j]=t;
           t++;
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(d[i]<d[j])
           {
               t=d[i];
               d[i]=d[j];
               d[j]=t;
           }
       }
   }
   t=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(a[i][j]==d[t])
           {

               a[i][j]=1;
               if(t<n)
               t++;
           }
           else
           {
               a[i][j]=0;
           }
       }
   }
   if((a[0][0]&&a[0][1]&&a[0][2])||(a[0][0]&&a[1][1]&&a[2][2])||(a[0][1]&&a[1][1]&&a[2][1])||(a[0][2]&&a[1][2]&&a[2][2])||(a[0][0]&&a[1][0]&&a[2][0])||(a[1][0]&&a[1][1]&&a[1][2])||(a[2][0]&&a[2][1]&&a[2][2])||(a[2][0]&&a[1][1]&&a[0][2]))
   return 1;
   else
   return 0;
}
int check(int d[9],int n,int l)
{
    int z,c1=0,c2=0,d1[5],d2[5],i;
   // if(n>=5)
    {//printf("%%%%%%%%%%%\n");
        for(i=0;i<n;i++)
        {
            if(d[i]>0)
            {
                d1[c1]=d[i];
                c1++;
            }
            else
            {
                d2[c2]=-d[i];
                c2++;
            }
        }
        if(l==0)
        {z=check1(c1,d1);
        return z;
        }
        else if(l==1)
        {z=check1(c2,d2);
        return z;}
    }
   // else
    //return 0;
}
int predict(int n,int d[9])
{
    int d1[5],i,j,a[3][3],t1,b[3][3],t=1;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           a[i][j]=t;
           t++;
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(d[i]<d[j])
           {
               t=d[i];
               d[i]=d[j];
               d[j]=t;
           }
       }
   }
   t=0;
   for(i=0;i<n;i++)
   {
       if(d[i]>0)
       {d1[t]=d[i];
       t++;}
   }
   t=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(a[i][j]==d1[t])
           {

               a[i][j]=1;
               if(t<n)
               t++;
           }
           else
           {
               a[i][j]=0;
           }
       }
   }
   t=1;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           b[i][j]=t;
           t++;
       }
   }
   t=0;
   for(i=0;i<n;i++)
   {
       if(d[i]<0)
       {d1[t]=-d[i];
       t++;}
   }
   for(i=0;i<t;i++)
   {
       for(j=0;j<t;j++)
       {
           if(d1[i]<d1[j])
           {
               t1=d1[i];
               d1[i]=d1[j];
               d1[j]=t1;
           }
       }
   }
   t=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(b[i][j]==d1[t])
           {

               a[i][j]=-1;
               if(t<n)
               t++;
           }
       }
   }
   if(a[0][0]+a[0][1]+a[0][2]==2)
   {
       if(a[0][0]==0)
       return 1;
       else if(a[0][1]==0)
       return 2;
       else if(a[0][2]==0)
       return 3;
   }
   else if(a[0][0]+a[1][1]+a[2][2]==2)
   {
       if(a[0][0]==0)
       return 1;
       else if(a[1][1]==0)
       return 5;
       else if(a[2][2]==0)
       return 9;
   }
   else if(a[0][1]+a[1][1]+a[2][1]==2)
   {
        if(a[0][1]==0)
       return 2;
       else if(a[1][1]==0)
       return 5;
       else if(a[2][1]==0)
       return 8;
   }
   else if(a[0][2]+a[1][2]+a[2][2]==2)
   {
        if(a[0][2]==0)
       return 3;
       else if(a[1][2]==0)
       return 6;
       else if(a[2][2]==0)
       return 9;
   }
   else if(a[0][0]+a[1][0]+a[2][0]==2)
   {
        if(a[0][0]==0)
       return 1;
       else if(a[1][0]==0)
       return 4;
       else if(a[2][0]==0)
       return 7;
   }
   else if(a[1][0]+a[1][1]+a[1][2]==2)
   {
        if(a[1][0]==0)
       return 4;
       else if(a[1][1]==0)
       return 5;
       else if(a[1][2]==0)
       return 6;
   }
   else if(a[2][0]+a[2][1]+a[2][2]==2)
   {
        if(a[2][0]==0)
       return 7;
       else if(a[2][1]==0)
       return 8;
       else if(a[2][2]==0)
       return 9;
   }
   else if(a[2][0]+a[1][1]+a[0][2]==2)
   {
        if(a[2][0]==0)
       return 7;
       else if(a[1][1]==0)
       return 5;
       else if(a[0][2]==0)
       return 3;
   }
   else
   {
       return systemin(n,d);
   }

}
int main()
{
    int i,c,x,n=0,l,d[9]={0,0,0,0,0,0,0,0,0},z,y;
    char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}},b;
    printf("Do u want to start the game[Y/N]\n");
    scanf("%c",&b);
    printf("level:\n1.easy\n2.hard\n");
    scanf("%d",&y);
    struc(a);
    if(b=='Y')
    {
        printf("U R 'X's'\n");
        while(n<=9)
        {c=input(n,d);
        d[n]=c;
        n++;
        switch(c)
        {
            case 1:
            a[0][0]='X';
            break;
            case 2:
            a[0][1]='X';
            break;
            case 3:
            a[0][2]='X';
            break;
            case 4:
            a[1][0]='X';
            break;
            case 5:
            a[1][1]='X';
            break;
            case 6:
            a[1][2]='X';
            break;
            case 7:
            a[2][0]='X';
            break;
            case 8:
            a[2][1]='X';
            break;
            case 9:
            a[2][2]='X';
            break;
        }
       struc(a);
       l=0;
       z=check(d,n,l);
       if(z==1)
       {
           printf("You won..!");
           break;
       }
       if(n<3&&y==1)
       {x=systemin(n,d);
       d[n]=-x;
       n++;}
       else
       {
           x=predict(n,d);
           d[n]=-x;
           n++;
       }
        switch(x)
        {
            case 1:
            a[0][0]='O';
            break;
            case 2:
            a[0][1]='O';
            break;
            case 3:
            a[0][2]='O';
            break;
            case 4:
            a[1][0]='O';
            break;
            case 5:
            a[1][1]='O';
            break;
            case 6:
            a[1][2]='O';
            break;
            case 7:
            a[2][0]='O';
            break;
            case 8:
            a[2][1]='O';
            break;
            case 9:
            a[2][2]='O';
            break;
        }
        struc(a);
        l=1;
         z=check(d,n,l);
       if(z==1)
       {
           printf("Computer won..!");
           break;
       }
        }
    }
    else
    {
         printf("U R 'O's'\n");
       while(n<=9)
       {
           if(n<4&&y==1)
       {
           x=systemin(n,d);
           d[n]=-x;
           n++;
       }
       else
       {
           x=predict(n,d);
           d[n]=-x;
           n++;
       }
        switch(x)
        {
            case 1:
            a[0][0]='X';
            break;
            case 2:
            a[0][1]='X';
            break;
            case 3:
            a[0][2]='X';
            break;
            case 4:
            a[1][0]='X';
            break;
            case 5:
            a[1][1]='X';
            break;
            case 6:
            a[1][2]='X';
            break;
            case 7:
            a[2][0]='X';
            break;
            case 8:
            a[2][1]='X';
            break;
            case 9:
            a[2][2]='X';
            break;
        }
         struc(a);
        l=1;
         z=check(d,n,l);
       if(z==1)
       {
           printf("Computer won..!");
           break;
       }
       c=input(n,d);
        d[n]=c;
        n++;
        switch(c)
        {
            case 1:
            a[0][0]='O';
            break;
            case 2:
            a[0][1]='O';
            break;
            case 3:
            a[0][2]='O';
            break;
            case 4:
            a[1][0]='O';
            break;
            case 5:
            a[1][1]='O';
            break;
            case 6:
            a[1][2]='O';
            break;
            case 7:
            a[2][0]='O';
            break;
            case 8:
            a[2][1]='O';
            break;
            case 9:
            a[2][2]='O';
            break;
        }
          struc(a);
       l=0;
       z=check(d,n,l);
       if(z==1)
       {
           printf("You won..!");
           break;
       }
       }
    }
    return 0;
}
