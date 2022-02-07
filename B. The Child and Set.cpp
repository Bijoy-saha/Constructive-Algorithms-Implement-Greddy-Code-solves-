#include<iostream>
#include<string>
using ll=long long;
#include <utility>
using namespace std;
#include<sstream>
ll mod=1e9+7;
#include<bits/stdc++.h>
#define ya  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define pb push_back
#define fast_cin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(bi) bi.begin(),bi.end()
//bara_kissu hbena amar diya
/*map<ll,ll>mp;
void solve(vector<ll>bi,ll sum1)
{
    unordered_map<ll, ll> prevSum;
    ll cursum=0;
    ll res=0;
    for(i=1; i<=bi.size(); i++)
    {
        cursum+=bi[i];
        prevsum[cursum]++;
    }
}*/
int main()
{
    fast_cin;
    ll n,t,i,j=1,x,y,m,sum,limit,odd;
    set<ll>st,s;
    vector<ll>bi,b;
    cin>>sum>>limit;
    map<ll,ll>mp;
    if(limit%2==1)
    {
        odd=(limit+1)/2;
    }
    else
    {
        odd=limit/2;
    }
    for(i=2;i<=limit;i=i+2)
    {
        s.insert(i);
    }
    for(i=1;i<=limit;i++)
    {
        if(j*2<=limit)
        j=j*2;
        else
        {
            break;
        }

    }
   for(i=j;i>=2;i=i/2)
   {
     for(auto it:s)
     {
         if(it%i==0&&(it/i)%2==1&&mp[it]==0&&sum-i>=0)
         {
             //cout<<it<<endl;
             sum=sum-i;
             st.insert(it);
             //cout<<it<<" "<<i<<endl;
             mp[it]=1;
         }
     }
   }
    //cout<<st.size()<<endl;
   //for(auto it:st)cout<<it<<endl;
   //return 0;

   if(sum>0)
   {
       for(i=1;i<=limit;i+=2)
       {
           st.insert(i);
           sum--;
           if(sum==0)break;
       }
   }
   //cout<<sum<<endl;
   if(sum==0){
   cout<<st.size()<<endl;
   for(auto it:st)cout<<it<<endl;
   }else cout<<-1<<endl;


}