#include<iostream>
using namespace std;
int place[3];
int maxx=0,minn=1000000000;
void swap(bool n)
{
    int t;
    t=place[0+n];
    place[0+n]=place[1+n];
    place[1+n]=t;
    //交换前(n=0)或后(n=1)两只羊的先后顺序
}
void dfs(int time)
{
    if(place[0]+1==place[1]&&place[1]+1==place[2])//相邻
    {
        if(time>maxx)maxx=time;
        if(time<minn)minn=time;
        return ;
    }

    int temp=place[0];//暂存 用于回溯
    for(int i=place[1]+1;i<place[2];i++)//第一只移动向第二三只之间
    {
        place[0]=i;
        swap(0);
        dfs(time+1);
        swap(0);
        place[0]=temp;
    }
    // if(place[1]+2!=place[2])place[0]=place[1]+2;
    // else place[0]=place[1]+1;
    // swap(0);
    // dfs(time+1);
    // swap(0);
    // place[0]=place[1]+(place[2]-place[1])/2;
    // swap(0);
    // dfs(time+1);
    // swap(0);
    // place[0]=temp;

    temp=place[2];//暂存第三只羊
    for(int i=place[0]+1;i<place[1];i++)//第三只移动向第一二只之间
    {
        place[2]=i;
        swap(1);
        dfs(time+1);
        swap(1);
        place[2]=temp;
    }
    // if(place[0]+2!=place[1])place[2]=place[0]+2;
    // else place[2]=place[0]+1;
    // swap(1);
    // dfs(time+1);
    // swap(1);
    // place[2]=place[0]+(place[1]-place[0])/2;
    // swap(1);
    // dfs(time+1);
    // swap(1);
    // place[2]=temp;

    return ;
}
int main()
{
    for(int i=0;i<3;i++)
        cin>>place[i];
    dfs(0);
    cout<<minn<<endl<<maxx;
    return 0;
}