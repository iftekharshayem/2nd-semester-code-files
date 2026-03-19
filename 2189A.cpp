#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, h, l,ans,x;
        cin >> n >> h >> l;
          int row=0,col=0; 
        while(n--){
          cin>>x;
          if(x<=l)row++;
          if(x<=h)col++;
       }
       if(row<col)ans=row;
       else 
       ans=col;
       cout<<ans;


        return 0;
    }