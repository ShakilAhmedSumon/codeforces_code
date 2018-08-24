#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    //long long int a[n];
    vector<long long int>a;
    int c=1;
    vector<int>count;

    for(int i=0; i<n; i++)
    {
        int s;
        cin>>s;
        a.push_back(s);
    }


    if(a.size()==1){
        count.push_back(1);
    }

    else {
    for(int i=0; i<n-1; i++)
    {

        if(a[i]<=a[i+1])
        {
            c++;

            if(i==(n-2))
            {
              count.push_back(c);
              break;
            }
        }


        else
        {
           count.push_back(c);
           c=1;
        }
    }
    }

    sort(count.begin(),count.end());

    cout<<count[count.size()-1]<<endl;

}
