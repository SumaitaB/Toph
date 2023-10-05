#include<stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))
int main()
{
     int n,m,i,j,chest=0,chestu=0,key=0,keyu=0,p=0,a[100005],k[100005];
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)chest++;
        else chestu++;

    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&k[i]);
        if(k[i]%2==1)key++;
        else keyu++;
    }
    p=MIN(key,chestu)+MIN(keyu,chest);

    printf("%d\n",p);
    return 0;
}
