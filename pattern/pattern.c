#include<stdio.h>
void odd();
void even();
void main()
{
    int i,k,l,j,n,c,a;
    printf("enter the input:");
    scanf("%d",&n);
    if(n%2==1)
        odd(n);
   else
        even(n);
}
    void odd(int n)
    {
     int i,k,l,j,c,a;
    for(i=0;i<n/2;i++)
    {
        for(k=0;k<=i;k++)
        {
            if(k%2==0)
            {
                printf("* ");
                c=0;
            }
            else
             {
             printf("0 ");
             c=1;
             }
        }
        for(j=k;j<n-i-1;j++)
        {
            if(c==0)
            {
                printf("* ");
                a=0;
            }
            else
            {
            printf("0 ");
            a=1;
            }
        }
        for(l=j;l<n;l++)
        {
             if(a==0)
            {
                printf("* ");
                a=1;

            }
            else
            {
            printf("0 ");
             a=0;
            }
        }
        printf("\n");

    }
    a=10;
    for(i=i;i<n;i++)
    {
        for(k=0;k<=(n-i-1);k++)
        {
            if(k%2==0)
            {
                printf("* ");
                c=0;
            }
            else
             {
                 printf("0 ");
                 c=1;
             }

        }
        for(j=k;j<=(i-1);j++)
        {
            if(c==0)
            {
                printf("* ");
                a=0;
            }
            else
            {
                printf("0 ");
                a=1;
            }
        }
        for(l=j;l<n;l++)
        {

            if(a==0)
            {
                printf("* ");
                a=1;
            }
            else if(a==1)
            {
                printf("0 ");
                a=0;
            }
            else if(c==0)
            {
                printf("0 ");
            a=0;
            }
            else
                {
                    printf("* ");
            a=1;
                }
        }

             printf("\n");
    }
}
void even(int n)
{
    int i,k,l,j,c,a=10;
  for(i=0;i<n/2;i++)
    {
        for(k=0;k<=i;k++)
        {
            if(k%2==0)
            {
                printf("0 ");
                c=0;
            }
            else
             {
             printf("* ");
             c=1;
             }
        }

        for(j=k;j<(n-i-1);j++)
        {
            if(c==0)
            {
                printf("0 ");
                a=0;
            }
            else
            {
            printf("* ");
            a=1;
            }
        }
        for(l=j;l<n;l++)
        {
             if(a==0)
            {
                printf("0 ");
                a=1;

            }
            else if(a==1)
            {
            printf("* ");
                 a=0;
            }
            else if(c==0)
            {
             printf("0 ");
                 a=1;
            }
            else
                {
                    printf("* ");
                   a=0;
                }
        }
        printf("\n");

    }

    a=10;
    for(i=i;i<n;i++)
    {
        for(k=0;k<=(n-i-1);k++)
        {
            if(k%2==0)
            {
                printf("0 ");
                c=0;
            }
            else
             {
                 printf("* ");
                 c=1;
             }

        }
        for(j=k;j<=(i-1);j++)
        {
            if(c==0)
            {
                printf("0 ");
                a=0;
            }
            else
            {
                printf("* ");
                a=1;
            }
        }
        for(l=j;l<n;l++)
        {
           if(a==0)
            {
                printf("0 ");
                a=1;

            }
            else if(a==1)
            {
            printf("* ");
                 a=0;
            }
            else if(c==0)
            {
             printf("0 ");
                 a=1;
            }
            else
                {
                    printf("* ");
                   a=0;
                }
        }

             printf("\n");
    }
}


