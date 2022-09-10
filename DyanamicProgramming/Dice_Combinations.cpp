#include<bits/stdc++.h>
using namespace std;
#define MaxN 1000001
#define mod 1000000007

int dp[MaxN],n;

int diceCom(int tar)
{
    if(dp[tar] !=0)
    return dp[tar];

    for(int i=1;i<=6;i++)
    {
        if((tar-i)>=0)
        {
            dp[tar] +=diceCom(tar-i);
            dp[tar] %=mod;
        }
    }
    return dp[tar];
}

int main()
{

  cin>> n;
  memset(dp,0,sizeof(dp));
  dp[0]=1;
cout<<diceCom(n)<<endl;
  return 0;
}