#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cin>>s;

         int val=0;
      for(int i=0;i<n;i++)
      {     
           if((int)s[i]>val)
              val=(int)s[i];

      }
         int count=0;
          
           for(int j=97;j<=val;j++)
           {
              count++;
           }

           cout<<count<<"\n";
        


    }

    return 0;
}