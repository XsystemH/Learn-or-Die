#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    int num[101][2002];
    int n[101]={0};
    cin>>t;
    cin.get();
    for(int i=0;i<t;i++)
    {
        char temp;
        bool f=0;//读取换行
        while(cin.get(temp)) 
        {
            if(temp=='\n')
            {
                break;
            }
            else if(temp==' ')
            {
                if(f==1)num[i][n[i]]=-num[i][n[i]];
                f=0;
                n[i]++;
            }
            else if(temp=='-')
                f=1;//记忆为负数
            else
            {
                num[i][n[i]]=num[i][n[i]]*10+int(temp-'0');
            }
        }
        // cout<<i<<" ";
    }
    // cout<<endl;
    for(int i=0;i<t;i++)
    {
        // cout<<"第"<<i<<"行：";
        for(int j=n[i]-1;j>=0;j--)
            cout<<num[i][j]<<" ";
        cout<<endl;
    }
}