#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0; i<=n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }



    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        if(arr[i]==4)
        {
            arr[i]=0;
            count++;
            //cout<<count<<endl;
        }

        else
        {
            int n=arr[i];
            for(int j=i+1;j<n; j++)
            {
                if(n+arr[j]==4)
                {
                    count++;
                    arr[j]=0;
                    arr[i]=0;
                    //cout<<count<<endl;
                    break;
                }
            }
        }
    }
    //cout<<count<<endl;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
            count++;
    }

    cout<<count<<endl;
}
