#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> &p1,pair<int,int>&p2)
{
    return (p1.second< p2.second);
    
    
}
int main()
{
    int n;
    cin>> n;

    vector<pair<int,int> > inter(n);
    for(int i=0;i<n;i++)
    {
        cin>> inter[i].first>>inter[i].second;
    }     
    sort(inter.begin(),inter.end(),mycmp);
   int cnt=1;
   int end=inter[0].second;
   for(int i=1;i<n;i++)
   {
     if(end <= inter[i].first)
     {
        cnt++;
        end=inter[i].second;
     }
   }
   cout<< cnt<<endl;

   return 0;
}