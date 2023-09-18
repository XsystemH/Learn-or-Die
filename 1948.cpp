#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    string s[200001];
    int ans[200001];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
        ans[i]=s[i].size()+1;//加1是为了避免最后无法判断输入为123 或111 等类似的情况
        // cout<<endl<<s[i]<<endl;
        for(int j=0;j<s[i].size()-2;j++)//从头开始遍历
        {
            if(ans[i]==3)break;//不可能有小于3的答案 剪枝
            int temp[11]={0};//寄存123
            temp[int(s[i][j]-'0')]++;//第一个数
            for(int k=j+1;k<s[i].size();k++)
            {
                if(s[i][j]==s[i][k])
                {
                    temp[int(s[i][k]-'0')]++;//存入最新
                    temp[int(s[i][j]-'0')]--;//删除开头
                    j++;
                    //头尾重复 向前一步
                    // cout<<"*";
                }
                else
                {
                    temp[int(s[i][k]-'0')]=1;//记录
                    if(temp[1]>=1&&temp[2]>=1&&temp[3]>=1)//检验123是否全满
                    {
                        if(ans[i]>k-j+1)ans[i]=k-j+1;
                        // cout<<"gx:"<<ans[i]<<" j:"<<j<<" k:"<<k;
                        break;//更新答案
                    }
                }
            }
            // cout<<"&"<<endl;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i]!=s[i].size()+1)cout<<ans[i]<<endl;
        else cout<<0<<endl;
    }
    return 0;
}