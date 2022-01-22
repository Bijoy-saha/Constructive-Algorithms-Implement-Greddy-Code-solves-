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
//sikhlam(youtube)
int main()
{
    fast_cin;
    ll n,t,i,j=0,x,y,m;
    cin>>n;
    vector<ll>b(n+1),bi(n+1),c(n+1);
    for(i=1;i<=n;i++)
    {
        cin>>x;
        b[i]=x;
    }
 for(i=1;i<=n;i++)
    {
        cin>>x;
        bi[i]=x;
    }
    for(i=1;i<=n;i++)
    {
        c[i]=b[i]-bi[i];
    }
    sort(all(c));
    ll cnt=0;
     for(i=1;i<=n;i++)
     {
         if(c[i]<=0)continue;
         else
         {
            ll  pos=lower_bound(all(c),-c[i]+1)-c.begin();
            cnt+=(i-pos)-1;
         }
     }
     cout<<cnt<<endl;
}