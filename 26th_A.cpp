#include<bits/stdc++.h>

using namespace std;

int main()
{

    string alphabets="abcdefghijklmnopqrstyz";

    int n,k;
    cin>>n>>k;

    std::string str;

    cin>>str;
    bool flag=true;

    std::sort(str.begin(),str.end());

    for(int i=0; i<n; i++)
    {
     if(str[i]-str[i+1]==-1 || str[i]-str[i+1]==0)
     {
        for(int j=i+1; j<n; j++)
        {
            str[j]=str[j+1];

        }
        n--;

        if(n<k)
        {
            flag=false;
            break;
        }
     }
    }
    int sum=0;
    for(int i=0; i<k; i++)
    {
      int rest=str[i]-96;
      sum= sum+rest;
    }



    if(flag)
      cout<<sum<<endl;

    else
    cout<<-1<<endl;


}
