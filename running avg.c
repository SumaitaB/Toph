#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    double a[n+1],s=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&a[i]);
        s+=a[i];
        printf("%lf\n",(s/i*1.00));
    }
    return 0;
}
