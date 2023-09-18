#include<iostream>
using namespace std;
bool Mor=false;
string s;
int turn(bool n)
{
    int re=0;
    char temp1;
    bool pd=false;
    int i;
    if(n==0)i=1;
    else i=0;
    for(;i<s.size();i++)
    {
        temp1=s[i];
        if(temp1>='0'&&temp1<='9')
        {
            if(pd==0&&temp1=='0')return -1;
            else 
            {
                re=re*10+int(temp1-'0');
                pd=1;
            }
        }
        else return -2;
    }
    return re;
}
int main()
{
    // freopen("input.txt","r",stdin); 
	// freopen("out.txt","w",stdout);
    int t,number;
    char temp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s.size()>5)
        {
            // cout<<"error5:";
            cout<<"Invalid"<<endl;
            continue ;
        }//借助长度最大为5判定

        temp=s[0];
        if(!((temp>'0'&&temp<='9')||temp=='S'||temp=='Z'||temp=='T'||temp=='K'||temp=='Y'))
        {
            // cout<<"errorF:";
            cout<<"Invalid"<<endl;
            continue ;
        }//检验第一个字符是否在合法的范围内

        bool n=(temp>'0'&&temp<='9');
        // cout<<n;

        number=turn(n);
        if(number==-2)
        {
            // cout<<"errorM:";
            cout<<"Invalid"<<endl;
            continue ;
        }//有其他字母
        if(number==-1)
        {
            // cout<<"error0:";
            cout<<"Invalid"<<endl;
            continue ;
        }//有先导0

        if(n)
        {
            if(number>=1001&&number<=5998)
            {
                cout<<"Pukuai"<<endl;
                continue ;
            }
            if(number>=6001&&number<=7598)
            {
                cout<<"Puke"<<endl;
                continue ;
            }
            if(number>=7601&&number<=8998)
            {
                cout<<"Tongqin"<<endl;
                continue ;
            }
            // cout<<"errorN:";
            cout<<"Invalid"<<endl;
            continue ;
        }//纯数字

        if(temp=='S')
        {
            if(number>=101&&number<=9998)
            {
                cout<<"Shijiao"<<endl;
                continue ;
            }
            else 
            {
                cout<<"Invalid"<<endl;
                continue ;
            }
        }

        if(temp=='Z')
        {
            if(number>=1&&number<=9998)
            {
                cout<<"Zhikuai"<<endl;
                continue ;
            }
            else 
            {
                cout<<"Invalid"<<endl;
                continue ;
            }
        }

        if(temp=='T')
        {
            if(number>=1&&number<=9998)
            {
                cout<<"Tekuai"<<endl;
                continue ;
            }
            else 
            {
                cout<<"Invalid"<<endl;
                continue ;
            }
        }

        if(temp=='K')
        {
            if(number>=1&&number<=9998)
            {
                cout<<"Kuaisu"<<endl;
                continue ;
            }
            else 
            {
                cout<<"Invalid"<<endl;
                continue ;
            }
        }

        if(temp=='Y')
        {
            if(number>=1&&number<=998)
            {
                cout<<"Lyuyou"<<endl;
                continue ;
            }
            else 
            {
                cout<<"Invalid"<<endl;
                continue ;
            }
        }
    }
    return 0;
}