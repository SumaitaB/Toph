#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,x=0,y=0,z=0,j,p,k,d=1,cc=0;
    char a[120],b[120],c[120];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        cc=0;
        d=1;
        scanf(" %[^\t\n]s",&a);
        scanf(" %[^\t\n]s",&b);
        x=strlen(a);
        y=strlen(b);
        z=strlen(c);
          for(k=0; k<x; k++)
    {
        for(j=0; j<z; j++)
        {
            if(a[k]==c[j])
            {
                for(d=1; d<z; d++)
                {
                    if(a[k+d]==c[j+d])
                    {
                        if((k+d)==z)
                        {
                            cc=1;
                        }
                    }
                }
            }

        }
    }
             for(k=0; k<y; k++)
    {
        for(j=0; j<z; j++)
        {
            if(b[k]==c[j])
            {
                for(d=1; d<z; d++)
                {
                    if(b[k+d]==c[j+d])
                    {
                        if((k+d)==z)
                        {
                            r=1;
                        }
                    }
                }
            }

        }
    }
    if(cc==1&&r==1)
    {
        if(x>y)
        {
            printf("")
        }
    }
        return 0;
    }
