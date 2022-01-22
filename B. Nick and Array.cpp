#include<iostream>
#include<string>
using ll=long long;
using namespace std;
#include<sstream>
ll mod=1e9+7;
#include<bits/stdc++.h>
#define ya  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define mns cout<<-1<<endl;
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
    ll t,n,i,j=0,ck,y=0,x;
    cin>>n;
    vector<ll>bi,b,c,tt;
    for(i=0; i<n; i++)
    {
        cin>>x;
        tt.pb(x);
        if(x<0)
        {
            bi.pb(x);
        }
        else if(x==0)
        {
            j=1;
            bi.pb(-1);
        }
        else
        {
            bi.pb(-(x+1));
            c.pb(x);
        }

    }
    ll ch1,ch2;
    ch1=bi.size();
    if(ch1%2==0)
    {
        for(i=0; i<bi.size(); i++)
            cout<<bi[i]<<endl;
    }
    else
    {
        //sort(all(bi),greater<int>());
        ll f=0;
        t=0;
        for(i=0; i<n; i++)
        {
            if(f>bi[i])
            {
                f=bi[i];
                t=i;
            }
        }
        if(f==0)
            bi[t]=0;
        else
            bi[t]=(-bi[t]-1);

        for(i=0; i<bi.size(); i++)
            cout<<bi[i]<<endl;
    }

}