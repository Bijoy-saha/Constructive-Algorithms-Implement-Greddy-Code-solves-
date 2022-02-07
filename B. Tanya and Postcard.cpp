#include<iostream>
using namespace std;
using ll=long long;
#include<map>
#include<set>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
int main()
{
    string s,s1;
    char x;
    map<char,int>bi,bi1;
    set<char>set1;
    std::map<char,int>::iterator it,it1,it2;
    int n,i,sum=0,k=0;
    cin>>s>>s1;
    n=s.size();
    for(i=0;i<n;i++)
    {
        x=s[i];
      bi[x]+=1;
    }
     for(i=0;i<s1.size();i++)
     {
        it=bi.find(s1[i]);
        if(it==bi.end())
        {
            x=s1[i];
            set1.insert(x);
            bi1[x]+=1;
            s1.erase(i,1);
            i=i-1;
        }else
        {
            bi[s1[i]]-=1;
            if( bi[s1[i]]<=0)
            {
                bi[s1[i]]=0;
                 bi.erase(it);
            }
        }
     }
     cout<<s1.size()<<endl;
     vector<char>s2(set1.begin(),set1.end());
     for(i=0;i<s2.size();i++)
     {
        it1=bi.find(s2[i]+32);
         it2=bi.find(s2[i]-32);
         if(it1!=bi.end())
         {
             sum+=min(bi1[s2[i]],bi[s2[i]+32]);
         }else if(it2!=bi.end())
         {
             sum+=min(bi1[s2[i]],bi[s2[i]-32]);
         }

     }
    cout<<sum;
}