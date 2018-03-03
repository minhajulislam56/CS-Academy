#include<bits/stdc++.h>
using namespace std;
int rw[305][305],cl[305][305];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    int mat[n+5][m+5];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=2;j<=m;j++){
            if(mat[i][j] && mat[i][j-1])
                rw[i][j]=rw[i][j-1]+1;
            else
                rw[i][j]=0;
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=m;j++){
            if(mat[i][j] && mat[i+1][j])
                cl[i][j]=cl[i+1][j]+1;
            else
                cl[i][j]=0;
        }
    }
    int sm=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(rw[i][j]+cl[i][j]>sm && rw[i][j] && cl[i][j])
                sm=rw[i][j]+cl[i][j];
        }
    }
    cout<<sm+1<<endl;
    return 0;
}
