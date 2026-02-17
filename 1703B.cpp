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
        int solved[26];
        for(int i=0;i<26;i++){
            solved[i]=0;

        }
        int balloons=0;
         for(int i=0;i<n;i++){
            int idx=s[i]-'A';
            if(solved[idx]==0){
                balloons+=2;
                solved[idx]=1;
            } else{
                balloons+=1;

            }

    
        }
         cout<<balloons<<"\n";
    }

    return 0;
}