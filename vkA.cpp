#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    string s;
    cin>>n;
    cin>>s;
    bool flag=true;

    sort(s.begin(), s.end());
    if(n==1)
        flag=false;
    else {

    for(int i=0; i<n-1; i++)
    {
       if(s[i]==s[i+1])
       {
         flag=false;
         break;
       }
    }
    }

    if(flag) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
