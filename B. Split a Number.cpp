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
    ll x,y,sum=0,i,j,cst=0,n,t,cst1=0,cost=0;
    vector<ll>bi;
    set<ll>st;
    string s1,s,s3,s4,s2,s5,s6,s7,s8;
    cin>>n>>s;
    j=(n+1)/2;
    for(i=j;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            j++;
        }else
        {
            break;
        }
    }
    s1=s.substr(0,j);
    s2=s.substr(j,(s.size()-j));
    j=(n+1)/2;
    j=j-1;
for(i=j;i>=0;i--)
    {
        if(s[i]=='0')
        {
            j--;
        }else
        {
            break;
        }
    }
    s3=s.substr(0,j);
    s4=s.substr(j,(s.size()-j));
    //cout<<s3<<" "<<s4<<endl;
    //cout<<s1<<" "<<s2<<endl;
    sum=0;
    cst=max(s1.size(),s2.size());
cst1=min(s1.size(),s2.size());
cost=cst-cst1;
if(s1.size()<s2.size())
{
    for(i=0;i<cost;i++)
    {
        s1.insert(0,"0");
    }
}else
{
    for(i=0;i<cost;i++)
    {
        s2.insert(0,"0");
    }
}
//cout<<s1<<" "<<s2<<endl;
cst=max(s3.size(),s4.size());
cst1=min(s3.size(),s4.size());
cost=cst-cst1;
if(s3.size()<s4.size())
{
    for(i=0;i<cost;i++)
    {
        s3.insert(0,"0");
    }
}else
{
    for(i=0;i<cost;i++)
    {
        s4.insert(0,"0");
    }
}
sum=0;
//cout<<s3<<" "<<s4<<endl;
for(i=s1.size()-1;i>=0;i--)
{
    sum=sum+(s1[i]-48)+(s2[i]-48);
    cst=sum%10;
    sum=sum/10;
    s5=to_string(cst);
    s6.insert(0,s5);
}
//cout<<s6<<endl;
s5=to_string(sum);
if(sum>0)s6.insert(0,s5);
sum=0;
for(i=s3.size()-1;i>=0;i--)
{
    sum=sum+(s3[i]-48)+(s4[i]-48);
    cst=sum%10;
    sum=sum/10;
    s7=to_string(cst);
    s8.insert(0,s7);
}
s7=to_string(sum);
if(sum>0)s8.insert(0,s7);
//cout<<s8<<endl;
ll p1=0;
ll p2=0;
if(s6.size()==s8.size())
{
for(i=0;i<s8.size();i++)
{
   if(s6[i]-48<s8[i]-48)
   {
       p1=1;
       break;
   }else if(s6[i]-48>s8[i]-48)
   {
       p2=1;
       break;
   }
}
if(p1==1)cout<<s6<<endl;
else if(p2==1)cout<<s8<<endl;
else cout<<s6<<endl;

}else
{
    if(s6.size()<s8.size())
    {
        cout<<s6<<endl;
    }else
    {
        cout<<s8<<endl;
    }
}
}


 