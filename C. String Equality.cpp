#include<iostream>
#include<string>
using ll=long long;
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
    fast_cin;
    ll i,j,sum,m,n,k,cst;
    vector<ll>bi,b;
    string s,s1,s3;
    map<ll,ll>mp,mpp;
    ll t;
    cin>>t;

    while(t--)
    {
        cst=0;
        cin>>n>>k;
        cin>>s>>s1;
        for(i=0; i<n; i++)
        {
            bi.pb(s[i]-0);
            mp[s[i]-0]++;
        }
        for(i=0; i<n; i++)
        {
            b.pb(s1[i]-0);
            mpp[s1[i]-0]++;
        }
        for(i=97;i<=123;i++)
        {
            if(mp[i]<mpp[i])
            {
                no
                cst=1;
                break;
            }else
            {
                mp[i]-=mpp[i];
            }
            if(mp[i]%k!=0&&cst==0)
                {
                    cst=1;
                    no
                    break;
                    }
                else
            {
                mp[i+1]+=mp[i];
            }
        }
       if(cst==0)ya
        bi.clear();
       mp.clear();
       mpp.clear();
       b.clear();
    }

}