#include<stdio.h>
int main()
{
    int n,i,sp,p=1,j,k;
    scanf("%d",&n);
    sp=n-1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=sp;k++)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("*");
           if(j!=i)
           {
               printf(" ");
           }
       }
       printf("\n");
           sp--;
    }
    return 0;
}
