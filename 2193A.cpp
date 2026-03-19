#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
     int sum=0,n,s,x;
     cin>>n>>s>>x;
     int arr[n];
     for(int i=0;i<n;i++){
           cin>>arr[i];
     }
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
          int diff;
          diff=s-sum;
          if(s<sum)
          cout<<"NO";
          else{
              if(diff%x==0)
              cout<<"YES";
              else
              cout<<"NO";
          }

    }

    return 0;
}