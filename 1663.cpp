#include<iostream>
#include<vector>
using namespace std;
vector<int> s;
void pd(int w)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==w)
        {
            s.erase(s.begin() + i);
            return ;
        }
    }//比对是否有已有未配对
    s.push_back(w);//插入新的未配对
    return ;
}
int main()
{
    std::ios::sync_with_stdio(false);
    int n,temp;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        pd(temp);
    }
    cout<<s[0];
    return 0;
}