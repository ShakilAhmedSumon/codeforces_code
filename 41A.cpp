#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string t;
    bool flag=true;
    cin>>s>>t;

    for(int i=0, j=s.length()-1; i<s.length(),j>=0; i++,j--)
    {
        if(s[i]!=t[j])
        {
            flag=false;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
