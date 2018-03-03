#include<bits/stdc++.h>
using namespace std;
int xx[]={0,1,-1,0,0,1,-1,1,-1};
int yy[]={0,0,0,1,-1,-1,-1,1,1};
int mat[505][505],ans[505];
int par[300007];
int find_set(int n)
{
	if(par[n]==n) return n;
	return par[n]=find_set(par[n]);
}
void make_set(int u,int v)
{
	par[find_set(u)]=find_set(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<=300005;i++) par[i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            int val=mat[i][j];

            for(int k=0;k<9;k++){
                if(mat[i+xx[k]][j+yy[k]]<val && (i+xx[k]<=n && i+xx[k]>=1) &&(j+yy[k]<=m && j+yy[k]>=1)){
                    val=mat[i+xx[k]][j+yy[k]];
                }
            }
            make_set(mat[i][j],val);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans[par[mat[i][j]]]++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[mat[i][j]]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
