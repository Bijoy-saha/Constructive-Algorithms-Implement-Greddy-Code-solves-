#include<iostream>
#include<string>
using ll=long long;
using namespace std;
#include<bits/stdc++.h>
#define ya  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define pb push_back
#define all(bi) bi.begin(),bi.end()
/*bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second > b.second;
}
*/
int main()
{
    ll n,i,j,sum,cst=0,x,y,p,p1;
    cin>>n;
    ll a[n+9],b[n+9];
    a[0]=0;
    b[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        p=min(x,y);
        p1=max(a[i-1],b[i-1]);
        sum=p-p1;
        a[i]=x;
        b[i]=y;
        if(sum>=0)
        {
            cst+=sum;
            if(a[i-1]!=b[i-1])cst++;
        }
    }
    cout<<cst+1;
}

 