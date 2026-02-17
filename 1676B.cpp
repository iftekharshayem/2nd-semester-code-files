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
    int candies[n];
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
       int min=candies[0];
       for(int i=1;i<n;i++)
       {
         if(candies[i]<min)
           min=candies[i];
       }
      int ans=0;
         for(int i=0;i<n;i++){
            ans+=(candies[i]-min);
         }
      cout<<ans<<"\n";


    }

    return 0;
}