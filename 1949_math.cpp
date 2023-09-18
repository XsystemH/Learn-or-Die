#include<iostream>
using namespace std;
int maxn(int x,int y)
{
    if(x>=y)return x;
    else return y;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        int t=b;
        b=a;a=t;
    }
    if(b>c)
    {
        int t=c;
        c=b;b=t;
    }
    if(a>b)
    {
        int t=b;
        b=a;a=t;
    }
    if(a+1==b&&b+1==c)
    {
        cout<<"0\n0";
        return 0;
    }
    if(b-a==2||c-b==2)cout<<1<<endl;
    else cout<<2<<endl;//最小
    
    if(b-a==2&&c-b==2)cout<<1<<endl;
    else cout<<maxn(b-a,c-b)-1;

    return 0;
}