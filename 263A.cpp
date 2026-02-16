#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mat[5][5];
    int a,b;
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==1)
              {
                a=i;
                b=j;
              }

        }
    }
           row=abs(a-2);
           col=abs(b-2);
    
        int move=row+col;
        cout<<move;

    return 0;
}