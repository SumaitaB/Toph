#include<bits/stdc++.h>
using namespace std;
int ch[100005]={0},key[100005]={0},key_ji=0,key_ou=0,ch_ji=0,ch_ou=0;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ch[i]);
        if(ch[i]%2==1)ch_ji++;
        else ch_ou++;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&key[i]);
        if(key[i]%2==1)key_ji++;
        else key_ou++;
    }
    int sum=min(key_ji,ch_ou)+min(key_ou,ch_ji);
    printf("%d\n",sum);
    return 0;
}
