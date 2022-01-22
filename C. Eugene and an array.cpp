//cpy
#include<iostream>
#include<string>
using ll=long long;
using namespace std;
#include<sstream>
ll mod=1e5+7;
#include<bits/stdc++.h>
#define ya  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define see(x)  cout<<endl<<#x<<" : "<<(x)<<endl;
#define pb push_back
#define fast_cin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(bi) bi.begin(),bi.end()
/*bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second > b.second;
}*/

const int N=200009;
ll pre[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n,ans=0,x,sum=0,i,p=0,j;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        pre[i] = pre[i-1]+x;
    }

    map<ll,ll>m;
    ll mx=0;
    for(i=0;i<=n;i++)
    {
        if(m.find(pre[i])!=m.end())
        {
            mx=max(mx,m[pre[i]]+1);
        //see(mx)
        }
        m[pre[i]]=i;
        ans += i-mx;
        //cout<<ans<<endl;
    }

    cout<<ans<<endl;

    return 0;
}