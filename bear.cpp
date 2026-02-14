#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    int years=0;
    cin>>a>>b;
    int limak,bob;
    limak=a;
    bob=b;
    while(limak<=bob)
    {
        
          limak=3*limak;
          bob=2*bob;
          years++;
          if(limak>bob)
            break;

    }
    cout<<years;

    return 0;
}