#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count=1;
    int flag=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1]){
           count++;
           if(count>=7){
              flag=1;
              break;}
        }
              else{
                count=1;
              }
            }
              
        if(flag==1)cout<<"YES\n";
           else
           cout<<"NO\n";

    

    return 0;
}