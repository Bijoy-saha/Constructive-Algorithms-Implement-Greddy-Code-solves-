#include<iostream>
#include<string>
using ll=long long;
#include <utility>
using namespace std;
#include<sstream>
#include<numeric>
ll mod=1e9+7;
#define filein freopen("input.txt","r",stdin)
#define fileout  freopen("output.txt","w",stdout)
#include<bits/stdc++.h>
#define ya  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define pb push_back
#define lst bi.back()
#define fast_cin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(bi) bi.begin(),bi.end()
#define printv(bi) for(i=0;i<bi.size();i++)cout<<bi[i]<<' ';cout<<endl;
#define see(x) cout<<x<<endl;
ll inf=1e10;
inline ll lcm(ll a,ll b)
{
    ll    y=(a*b)/__gcd(a,b);
    return y;
}
//iterateinaset for(auto it:s){cout<<it<<endl;}
//for searching a key:
//[auto it=mp.find(x);if(it!=mp.end())]
//for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
//*____________________________*
bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second > b.second;
}
//*______________________________*
ll myXOR(ll x, ll y)
{
    return (x | y) & (~x | ~y);
}
int main()
{
    fast_cin;
    ll n,i,j,x,y,a,c;
    map<char,ll>mp;
    map<ll,ll>m;
    string s;
    vector<ll>vc;
    cin>>s;
    if(s.size()<4)
    {
        no
        return 0;
    }
    ll sum=0;
    ll sum1=0;
    for(i=0; i<s.size()-1; i++)
    {
        mp[s[i]]++;
        if(s[i]=='A'&&s[i+1]=='B')
            sum++;
        else if(s[i]=='B'&&s[i+1]=='A')
            sum1++;
    }
    if(sum1>=2&&sum>=2)
        ya
        else if(sum==1)
        {
            ll ok=0;
            for(i=0; i<s.size()-1; i++)
            {
                if(s[i]=='A'&&s[i+1]=='B')
                {
                    m[i]=1;
                    m[i+1]=1;
                    break;
                }
            }
            for(i=0; i<s.size()-1; i++)
            {
                if(s[i]=='B'&&s[i+1]=='A'&&m[i]==0&&m[i+1]==0)
                {
                    ok=1;
                    break;
                }
            }
            if(ok==1)
                ya
                else
                    no
                }
        else if(sum1==1)
        {
            ll ok=0;
            for(i=0; i<s.size()-1; i++)
            {
                if(s[i]=='B'&&s[i+1]=='A')
                {
                    m[i]=1;
                    m[i+1]=1;
                    break;
                }
            }
             for(i=0; i<s.size()-1; i++)
            {
                if(s[i]=='A'&&s[i+1]=='B'&&m[i]==0&&m[i+1]==0)
                {
                    ok=1;
                    break;
                }
            }
            if(ok==1)
                ya
                else
                    no
        }else if(sum==0||sum1==0)no
}