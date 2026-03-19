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
    // using two pointer method 
     int fp=0;
    int sp=n-1;
    int count=0;
     while(fp<sp)
     {
      
      if(s[fp]!=s[sp]){
      count+=2;
        fp++;
        sp--;
     }
     else{
       break;
     }
    
     }
     int result=n-count;
     cout<<result<<"\n";
    }

    return 0;
}