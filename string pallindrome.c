#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,i;
    char a[105],b[105];
    scanf("%s",&a);
    x=strlen(a)-1;
    for(i=0; i<=x; i++)
    {
        b[i]=a[x-i];
    }
    b[x+1]='\0';
    if(strcmp(a,b)==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
