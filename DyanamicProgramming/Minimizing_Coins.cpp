#include<bits/stdc++.h>
using namespace std;
// #define INF INT_MAX
#define MaxN 1000001
#define mod 1000000007
int coins[MaxN],n;

int dp[MaxN],X,coin;

int main(){
   cin>> n;
   cin>> X;
    int INF=INT_MAX;
    fill(dp+1,dp+X+1,INF);

   for(int i=0;i<n;i++)
   {
    cin>> coin;
    for(int j=0;j<=X-coin;j++)
    {
        if(dp[j]!=INF)
        {
            dp[j+coin]=min(dp[j+coin],dp[j]+1);
        }
    }
   }
  int res =(dp[X]==INF)? -1 :dp[X];
   cout<<res <<endl;


    return 0;
}