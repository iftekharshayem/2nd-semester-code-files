#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

           int n;
           cin>>n;
           string s;
            cin>>s;
            int k[1000];
            int count=0;
        
      for(int i=65;i<100;i++){
              k[i]=0;

      }
      for(int i=0;i<n;i++){
           if(k[(int)s[i]]==0){
            count+=2;
            k[(int)s[i]]=1;
           }
          else{
             count++;
          }

              
          }
          cout<<count<<"\n";
      }


    

    return 0;
}