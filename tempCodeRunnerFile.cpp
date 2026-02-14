#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    string s2;
    cin>>s1>>s2;
     for(int i=0;i<s1.size();i++)
     {
        if(s1[i]=s2[i]&& abs((int)s1[i]-(int)s2[i]==32))
        cout<<0;
        
     }
     if(s1>s2)
     cout<<1;
     else if(s2<s1)
      cout<<-1;
     

    return 0;
}