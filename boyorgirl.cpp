#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
     char present[200];
     int distinct=0;
      for(int i=0;i<200;i++)
      {
         present[i]='\0';
      }

    for(int k=0;k<s.size();k++)
    {
        if(present[(int)s[k]]=='\0'){
            present[(int)s[k]]='!';
            distinct++;
        }
    } 
     if(distinct%2==0)cout<<"CHAT WITH HER!";
     else 
     cout<<"IGNORE HIM!";





    return 0;
}