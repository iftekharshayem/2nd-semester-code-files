#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int count=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
      s1[i]=tolower(s1[i]);
      s2[i]=tolower(s2[i]);
    }
    for(int i=0;i<s1.size();i++)
    {
      if(s1[i]==s2[i])count++;
    }
    if(count==s1.size())
    cout<<0;
    else if(s1<s2)
    cout<<-1;
  
    else
     cout<<1;
    return 0;
}