#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,hi,wi;
    bool flag=true;
    cin>>n;
    int h[n];
    int w[n];

    for(int i=0; i<n;i++)
    {
        cin>>wi>>hi;
        h[i]=hi;
        w[i]=wi;
    }

    for(int i=0; i<n; i++)
    {
        if(h[i+1]>h[i])
        {
        int minimum=min(h[i+1],w[i+1]);
        if(h[i]>=minimum)
        {
            h[i+1]=minimum;
        }

        else
        {
            flag=false;
            break;
        }
        }
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
