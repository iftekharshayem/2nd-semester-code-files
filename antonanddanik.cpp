#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int games;
    int Anton=0,Danik=0;
    cin>>games;
    char  store[games];
    for(int i=0;i<games;i++)
    { 
        cin>>store[i];

    }
    for(int i=0;i<games;i++)
    {
        if(store[i]=='A')
           Anton++;
           else
           Danik++;        
    }
     if(Anton>Danik)
        cout<<"Anton"<<"\n";
      else  if(Anton==Danik)
         cout<<"Friendship";
        else
        cout<<"Danik"<<"\n";


    return 0;
}