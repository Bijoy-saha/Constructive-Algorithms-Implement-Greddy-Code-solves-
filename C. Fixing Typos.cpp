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
    ll i,j=0,sum=0,t,cst=0;
    string s,s1;
    vector<string>vs;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
       if(s[i]==s[i+1])
       {
           sum+=2;
       }else
       {
        if(sum>=2&&cst==0)
        {
            cout<<s[i]<<s[i];
            cst=1;
        }else if(sum>=2&&cst==1)
        {
            cout<<s[i];
            cst=0;
        }
        else
        {
            cout<<s[i];
            cst=0;
        }
           sum=0;
       }
    }
    if(sum>=2&&cst==0)cout<<s[i]<<s[i];
    else if(sum>=2&&cst==1)cout<<s[i];
}



 