#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>> n>>x;
    vector<int> tickets(n);
    vector<int> customer(x);
    set<pair<int,int> > sortedTicket;
    for(int i=0;i<n;i++)
    {
        cin>>tickets[i];
        sortedTicket.insert({tickets[i],i});
    }
for(int i=0;i<x;i++)
{
    cin>> customer[i];
}   
for(int i=0;i<x;i++)
{
auto match=sortedTicket.lower_bound({customer[i]+1,0});
    if(match == sortedTicket.begin())
    {
        cout<<-1<<endl;
    }
    else{
        match--;
        cout<< (*match).first<<endl;
sortedTicket.erase(match);    }    
}
  
 

return 0;
}