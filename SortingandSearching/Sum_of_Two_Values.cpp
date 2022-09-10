#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,tar;
   cin>> n>>tar;
 map<int,int> mp;
 for(int i=0;i<n;i++)
 {
    int val;
    cin>>val;
    if(mp.count(tar-val)){
        cout<< i+1<<" "<<mp[tar-val]<<endl;
        return 0;
    }
    mp[val]=i+1;
 }
 
 cout<<"IMPOSSIBLE"<<endl;
//  for(int i=0;i<n;i++)
//  {
//     int a;
//     cin>> a;
//     vp.push_back({a,i});
//  }    
//    sort(vp.begin(),vp.end());
// int st=0;
// int end=n-1;
// bool flag=false;
// vector<int> ans(2);
//  while(st<end)
//  {
//     int sum=vp[st].first + vp[end].first;
//     if(sum == tar)
//     {
//         cout<< vp[st].second+1<<" "<<vp[end].second+1;
//    return 0;
//     }
//     else if(sum >tar)
//     {
//         end--;
//     }
//     else{
//         st++;
//     }

//  }
//  if(flag)
//  {
//     for(int i=0;i<2;i++)
//     {
//         cout<<ans[i]+1<<" ";
//     }
//  }
//  else{ 
//  cout<< "IMPOSSIBLE"<<endl;
//  }

}