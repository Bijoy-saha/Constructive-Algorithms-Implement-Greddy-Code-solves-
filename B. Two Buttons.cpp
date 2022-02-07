#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,sum=0,ex;
    cin>>n>>m;
    if(m<=n)
    {
        cout<<(n-m);
        return 0;
    }else
    {
        for(i=0;i<10000;i++)
        {
        if(m<=n)
        {
            ex=n-m;
            break;
        }
        if(m%2==0)
        {
            m=m/2;
            sum++;
        }else
        {
           m=(m+1)/2;
           sum=sum+2;
        }
        }
        cout<<sum+ex;
        return 0;
    }
}