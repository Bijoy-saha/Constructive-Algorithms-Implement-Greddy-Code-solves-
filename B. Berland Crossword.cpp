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
/*bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second > b.second;
}*/
int main()
{
    ll j1,i,j,m,n,x,y,mid,z,x1,t;
    cin>>t;
    while(t--)
    {
        j=0;
        ll p=1;
        cin>>n>>x>>y>>z>>x1;
        ll c1=x;ll c2=y;ll c3=z; ll  c4=x1;
        if(x==n)
        {
            c4--;
            c2--;
        }
        if(y==n)
        {
            c1--;
            c3--;
        }
        if(z==n)
        {
            c2--;
            c4--;
        }
        if(x1==n)
        {
            c1--;
            c3--;
        }
        if(x==(n-1))
        {
            if(c4>=c2)c4--;
            else c2--;
        }
        if(y==(n-1))
        {
            if(c1>=c3)c1--;
            else c3--;
        }
        if(z==(n-1))
        {
            if(c4>=c2)c4--;
            else c2--;
        }
        if(x1==(n-1))
        {
           if(c1>=c3)c1--;
            else c3--;
        }
        if(c1<0||c2<0||c3<0||c4<0)no
            else ya
    }

}