#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    char s[101][2002];//将空格一并读入
    int num[101]={0};
    cin>>t;
    for(int i=0;i<t;i++)
        while(cin.get(s[i][num[i]]))num[i]++;
    for(int i=0;i<t;i++)
    {
        for(int j=num[i]-1;j>=0;j--)
            cout<<s[i][j];
        cout<<endl;
    }
    return 0;
}