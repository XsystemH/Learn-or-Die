#include <iostream>
using namespace std;
int main()
{
    int n,i=1,r,c;
    int dir=0;//0上1下
    int snake[1002][1002];
    cin>>n;
    r=1,c=n;
    while(i<=n*n)
    {
        snake[r][c]=i;
        switch(dir)
        {
            case 0:{
                if(r==1&&c!=1)
                {
                    c--;
                    dir=1;
                }
                else if(r!=1&&c==1)
                {
                    r++;
                    dir=1;
                }
                else if(r==1&&c==1)
                {
                    r++;
                    dir=1;
                }
                else
                {
                    c--;
                    r--;
                }
                break ;
            }
            case 1:{
                if(r==n&&c!=n)
                {
                    c--;
                    dir=0;
                }
                else if(r!=n&&c==n)
                {
                    r++;
                    dir=0;
                }
                else if(r==n&&c==n)
                {
                    c--;
                    dir=0;
                }
                else
                {
                    c++;
                    r++;
                }
                break ;
            }
        }
        i++;
    }
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<=n;y++)
            printf("%9d", snake[x][y]);
        printf("\n");
    }
    return 0;
}