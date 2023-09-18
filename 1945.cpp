#include<iostream>
#include<cmath>
using namespace std;
// definition of seed
long long seed;

// function def.
int getA() {
    long long ret = seed;
    seed = (seed * 7ll + 13ll) % 1000000007ll;
    return ret;
}
int main()
{
    long long n,x,t;
    long long ans=0;
    cin>>n>>x;
    cin>>seed;
    // t=x;
    // for(int i=1;i<n;i++)
    //     x=(x*t)%1000000007;//引发后面除法的错误
    for(int i=n;i>=0;i--)//从样例看为倒序
    {
        long long xx=getA();//获取ai
        ans=(ans*x+xx)%1000000007;
    }
    cout<<ans;
    return 0;
}