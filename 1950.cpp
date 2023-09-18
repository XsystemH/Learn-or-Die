#include<iostream>
using namespace std;
int n,m;
bool ans=0;
bool like[102][102]={0};
int grass[102]={0};
bool pd(int t)
{
    for(int i=1;i<=t;i++)
        for(int j=1;j<=t;j++)
            if(like[i][j]==1&&grass[i]==grass[j])
                return 0;
    return 1;

}
void dfs(int t)
{
    if(ans==1)return ;
    if(t==n)
    {
        if(pd(t))
        {
            for(int i=1;i<=n;i++)
                cout<<grass[i];
            ans=1;
        }
        else return ;

    }
    for(int i=1;i<=4;i++)
    {
        grass[t+1]=i;
        if(!pd(t+1))continue ;
        dfs(t+1);
    }
    return ;
}
int main()
{
    cin>>n>>m;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        like[a][b]=1;
        like[b][a]=1;
    }
    grass[1]=1;
    dfs(1);
    return 0;
}