#include<iostream>
using namespace std;
int turn(string s)
{
    int op=0;
    for(char c:s)
    {
        op*=10;
        op+=int(c-'0');
    }
    return op;
}
int main()
{
    string s;
    cin>>s;
    if(s[0]=='G')cout<<"Gaosu";
    else if(s[0]=='C')cout<<"Chengji";
    else if(s[0]=='D')cout<<"Dongche";
    else if(s[0]=='S')cout<<"Shijiao";
    else if(s[0]=='Z')cout<<"Zhikuai";
    else if(s[0]=='T')cout<<"Tekuai";
    else if(s[0]=='K')cout<<"Kuaisu";
    else if(s[0]=='Y')cout<<"Lyuyou";
    else if(s[0]>='0'&&s[0]<='9')
    {
        int num=turn(s);
        if(num>=1001&&num<=5998)cout<<"Pukuai";
        else if(num>=6001&&num<=7598)cout<<"Puke";
        else if(num>=7601&&num<=8998)cout<<"Tongqin";
    }
    return 0;
}