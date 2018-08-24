#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m>>q;

    string given, match;

    cin>>given>>match;

    int  arr[n];

    for(int i=0; i<=(n-m)+1;i++)
    {
        if(given[i]!=match[0])
            arr[i]=0;
        else
        {
            bool matched=true;
            for(int j=i+1, k=1; j<n,k<m;j++,k++)
            {
                if(given[j]!=match[k])
                {
                    matched=false;
                    break;
                }
            }

            if(matched) arr[i]=1;
        }

        cout<<arr[i]<<endl;
    }

    int s,t,count;

    for(int i=0; i<q; i++)
    {
        count=0;
        cin>>s>>t;
        for(int j=s-1; j<t; j++)
        {
            if(arr[j]==1) count++;
        }

        if((t-s)+1<m)
            cout<<0<<endl;
        else cout<<count<<endl;
    }
}
