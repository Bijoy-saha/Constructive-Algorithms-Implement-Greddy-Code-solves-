#include<iostream>
#include<sstream>
using namespace std;
using ll=long  long;
#include<string>
#include<bits/stdc++.h>
int main()
{
    int n,i,j=10,sum,x,k;
    cin>>n;
    char ch;
    vector<string>s,bi;
    string s1,s2="",s3="";
    s1=to_string(n);
    for(i=0; i<s1.size(); i++)
    {
       s2.append("0");
    }
    for(j=0; j<9; j++)
    {
        sum=0;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]-48>0)
            {
                s3.append("1");
                x=s1[i]-48;
                x=x-1;
                s1[i]=x+48;
                sum=1;
            }
            else
            {
                if(sum==1)
                    s3.append("0");
            }
        }
        s.push_back(s3);
        s3.clear();
       /* for(i=0; i<s.size(); i++)
            cout<<s[i];
        cout<<endl;
        s.clear();*/
        if(s1==s2)
        {
        cout<<s.size()<<endl;
        for(i=0;i<s.size();i++)
        {
            cout<<s[i]<<endl;
        }
        return 0;
        }
    }
}