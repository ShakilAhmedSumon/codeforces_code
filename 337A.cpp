#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;

    vector<int>number;
    vector<int>v;

    for(int i=0; i<m; i++)
    {
        int x; cin>>x;
        number.push_back(x);
    }

    sort(number.begin(), number.end());
    int s=(m-n);


    for(int i=0; i<s+1; i++)
    {
       int a=abs(number[i]-number[i+(n-1)]);
       v.push_back(a);
       //cout<<a<<endl;

    }




    sort(v.begin(),v.end());


    cout<<v[0]<<endl;



}
