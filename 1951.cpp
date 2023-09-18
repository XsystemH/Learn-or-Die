#include<iostream>
using namespace std;
int main() {
  int n;
  string s[101];
  int st[101][2];
  int out[2] = {0, 2147483647};
  int in[2];
  int memory[102][2];
  int l = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // cin.get();
    cin>>s[i];
    // n->on o->none f->off
    cin >> st[i][0] >> st[i][1];
    if (l == 0 && s[i][1] != 'o')
      continue;
    else 
    {
        l = i;
        switch (s[i][1]) 
        {
            case 'o': 
            {
                out[0] = (out[0] >= st[i][0]) ? out[0] : st[i][0];
                out[1] = (out[1] <= st[i][1]) ? out[1] : st[i][1]; //取交集
                break;
            }
            case 'n': 
            {
                out[0] += st[i][0];
                out[1] += st[i][1];
                break;
            }
            case 'f': 
            {
                out[0] -= st[i][1];
                out[1] -= st[i][0];
                break;
            }
        }
    }
    memory[i][0]=out[0];
    memory[i][1]=out[1];
    // cout << out[0] << " " << out[1]<<endl;
  }
  if(out[0]<=0)out[0]=0;
  in[0]=out[0],in[1]=out[1];
  for(int i=n-1;i>=0;i--)
  {
    switch (s[i][1]) 
    {
        case 'o': 
        {
            in[0] = (in[0] >= st[i][0]) ? in[0] : st[i][0];
            in[1] = (in[1] <= st[i][1]) ? in[1] : st[i][1]; //取交集
            break;
        }
        case 'n': 
        {
            in[0] -= st[i][1];
            in[1] -= st[i][0];
            break;
        }
        case 'f': 
        {
            in[0] += st[i][1];
            in[1] += st[i][0];
            break;
        }
    }
    if(i>=l+1)
    {
        in[0] = (in[0] >= memory[i-1][0]) ? in[0] : memory[i-1][0];
        in[1] = (in[1] <= memory[i-1][1]) ? in[1] : memory[i-1][1];
    }
  }
  if(in[0]<=0)in[0]=0;
  cout << in[0]  << " " << in[1] << endl;
  cout << out[0] << " " << out[1];
  return 0;
}