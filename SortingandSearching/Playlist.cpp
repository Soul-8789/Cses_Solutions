#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> song(n);
    for(int i=0;i<n;i++)
    {
        cin>> song[i];
    }
    set<int> heard;
    int i=0;
    int j=0;
    int maxi=0;
    while(i < n && j < n)
    {
        while(j < n &&  !heard.count(song[j]))
        {
            heard.insert(song[j]);
            maxi=max(maxi,j-i+1);
            j++;
        }
         while(j < n &&  heard.count(song[j]))
        {
            heard.erase(song[i]);
            i++;
        }
    }
    cout<< maxi<<endl;
  return 0; 
}