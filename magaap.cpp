#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool flag=true;
    bool flag1=true;
    cin>>s;

    int l=s.length();

    if(isupper(s[0]))
    {
       for(int i=1; i<l; i++)
       {
            if(islower(s[i]))
            {
                flag1=false;
            }
       }

       if(!flag1) cout<<s<<endl;

       else
       {
            for(int i=0; i<l; i++)
            {
                s[i]=tolower(s[i]);
            }

            cout<<s<<endl;
       }
    }




    else if(islower(s[0]))
    {
        for(int i=1; i<l; i++)
        {
           if(islower(s[i]))
           {
            flag=false;
            break;
           }
        }

        if(!flag) cout<<s<<endl;

        else
        {
            s[0]=toupper(s[0]);
            for(int i=1; i<l; i++)
            {
                s[i]=tolower(s[i]);
            }

            cout<<s<<endl;
        }
    }

return 0;


}
