#include<iostream>
using namespace std;
int n,t=0;
string s[101];//状态
int st[101][2];//数据范围
int out[2] = {0, 2147483647};//输出
int in[2];//输入
int temp[2];//暂存输出
int maxn(int a,int b)
{
    if(a>b)return a;
    return b;
}
int minn(int a,int b)
{
    if(a<b)return a;
    return b;
}
bool pd(int c)
{
    temp[0]=temp[1]=c;
    for(int i=1;i<=n;i++)
    {
        //操作
        switch (s[i][1]) 
        {
            case 'o': 
            {
                if(temp[0]<st[i][0]&&temp[1]<st[i][0])return 0;
                if(temp[0]>st[i][1]&&temp[1]>st[i][1])return 0;
                break;
            }
            case 'n': 
            {
                temp[0] += st[i][0];
                temp[1] += st[i][1];
                break;
            }
            case 'f': 
            {
                temp[0] -= st[i][1];
                temp[1] -= st[i][0];
                break;
            }
        }
        if(temp[1]<0)return 0;
    }
    return 1;
}
int main()
{
    // freopen("input1.txt","r",stdin); 
	// freopen("output1.txt","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        cin>>st[i][0]>>st[i][1];
    }
    for(int i=0;i<=99999;i++)
    {
        if(pd(i))
        {
            if(t==0)in[1]=i;
            in[t]=i;
            // if(t==1)
            // {
            //     out[0]=minn(temp[0],out[0]);
            //     out[1]=maxn(temp[1],out[1]);
            // }
            // else
            // {
            //     out[0]=temp[0];
            //     out[1]=temp[1];
            // }
            t=1;
        }
    }
    temp[0]=in[0];
    temp[1]=in[1];
    for(int i=1;i<=n;i++)
    {
        switch (s[i][1]) 
        {
            case 'o': 
            {
                temp[0]=maxn(temp[0],st[i][0]);
                temp[1]=minn(temp[1],st[i][1]);
                break;
            }
            case 'n': 
            {
                temp[0] += st[i][0];
                temp[1] += st[i][1];
                break;
            }
            case 'f': 
            {
                temp[0] -= st[i][1];
                temp[1] -= st[i][0];
                break;
            }
        }
    }
    out[0]=temp[0];
    out[1]=temp[1];
    if(out[0]<0)out[0]=0;
    cout << in[0]  << " " << in[1] << endl;
    cout << out[0] << " " << out[1];
    return 0;
}