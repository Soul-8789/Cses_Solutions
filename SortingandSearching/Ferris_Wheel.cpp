#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>> n>>x;
    vector<int> arr(n);
    for(auto i=0;i<n;i++)
    {
        cin>> arr[i];
    }
   sort(arr.begin(),arr.end());

   int cnt=0;
   int i=0,j=arr.size()-1;
   while(i<=j)
   {

    if(arr[i]+arr[j]<=x)
    {
        cnt++;
        i++;
        j--;
    }
    else if(arr[j]<=x)
    {
        cnt++;
        j--;
    }
   }
  cout<< cnt<<endl;

return 0;
}