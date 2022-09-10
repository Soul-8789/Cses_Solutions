#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
     vector<pair<int,int> > tile;
     for(int i=0;i<n;i++)
     {
        int task;
        cin>>task;
        tile.push_back({task,i});
     }
     sort(tile.begin(),tile.end());
     int cnt=1;
     for(int i=1;i<n;i++)
     {
     	if(tile[i-1].second > tile[i].second)
     	{
     		cnt++;
     	}
     }
  cout<< cnt<<endl;
  return 0;
}