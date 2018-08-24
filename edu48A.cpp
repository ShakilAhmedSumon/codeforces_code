#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m; cin>>n>>m;

    long long int arr[n],turn[n];

    for(long long int i=0; i<n;i++)
    {
        cin>>arr[i];
    }


    for(long long int i=0; i<n-1;i++)
    {
        if(arr[i]<m)
        {
            turn[i]=0;
            arr[i+1]=arr[i+1]+arr[i];
        }

        else
        {
            if(arr[i]%m!=0)
            {

                turn[i]=arr[i]/m;
                arr[i+1]=arr[i+1]+arr[i]%m;
            }

            else
                turn[i]=arr[i]/m;
        }


    }

    turn[n-1]=arr[n-1]/m;
    for(long long int i=0; i<n; i++)
        cout<<turn[i]<<" ";





}
