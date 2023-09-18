#include<iostream>
// #include<cstdio>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin); 
	// freopen("D:\\out.txt","w",stdout);
    int s[100001];
    int t=0;
    while(cin>>s[t])
        t++;
    for(int i=t-1;i>=0;i--)
        cout<<s[i]<<endl;
    return 0;
}