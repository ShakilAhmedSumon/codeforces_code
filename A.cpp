#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool flag=true;
    //cout<<flag<<endl;
    int n= str.length();




        for(int i=0; i<n; i++)
        {

             if(i==(n-1))
            {
              if(str[i]!='a' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&  str[i]!='e' && str[i]!='n' )
                {flag=false;
                //cout<<i<<flag<<endl;
                break;
                }
            }



            char c= str[i];
            if(c!='a' && c!='i' && c!='o' && c!='u' &&  c!='e' && c!='n' )
            {
                if(str[i+1]!='a' && str[i+1]!='i' && str[i+1]!='o' && str[i+1]!='u' &&  str[i+1]!='e' )
                    {flag=false;
                    //cout<<i<<endl;
                    //cout<<flag<<endl;
                    }

            }


        }




    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
