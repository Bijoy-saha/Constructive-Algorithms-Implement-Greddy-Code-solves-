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
#define lst bi.back()
#define fast_cin ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(bi) bi.begin(),bi.end()
#define printv(bi) for(i=0;i<bi.size();i++)cout<<bi[i]<<" ";
ll inf=1e16;
//iterateinaset
//for(auto it:s)
//{
//cout<<it<<endl;
//}
//for searching a key:
/*[auto it=mp.find(x);
if(it!=mp.end())]
for(auto it:mp)
{
cout<<it.first<<" "<<it.second<<endl;
}*/


/*bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second > b.second;
}*/
//saauuo nijar diya  kissu hbena
/*ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}*/
int main()
{
    fast_cin;
    ll n,t,i,j,x,y,yy,k,ch;
    cin>>t;
    vector<ll>bi,vc;
    map<ll,ll>mp;
    set<ll>s;
    while(t--)
    {
        cin>>n>>k;
        j=1;
        s.insert(1);
        while(j<=inf)
        {
            s.insert(j*k);
           // cout<<j*k<<endl;
            j=j*k;
        }
        //sort(all(bi));
        for(i=0; i<n; i++)
        {
            cin>>x;
            bi.pb(x);
        }
        sort(all(bi),greater<int>());
        for(i=0; i<n; i++)
        {
            x=bi[i];
            ch=0;
            if(x>0)
            {
                if(s.empty())
                {
                    ch=1;
                    break;
                }
                for(auto it=s.rbegin();it!=s.rend();it++)
                {
                    if(x>=(*it))
                    {
                        //cout<<*it<<" "<<x<<endl;
                        x=x-(*it);
                        s.erase(*it);
                        it--;
                        //cout<<x<<endl;
                        if(x==0)break;
                    }
                }
                if(x!=0)
                {
                    //cout<<x<<endl;
                    ch=1;
                }
            }
            if(ch==1)break;
        }
        if(ch==1)no
        else ya

            bi.clear();
        s.clear();
    }
}