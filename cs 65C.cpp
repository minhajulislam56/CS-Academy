#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
vector<int>edge[MAX], ans;
int dis[MAX], par[MAX];
bool visited[MAX];
int mnode, mnvalue;
void dfs(int u)
{
    for(int i=0;i<edge[u].size();i++){
        int v=edge[u][i];
        if(dis[v]==-1){
            dis[v]=dis[u]+1;
            if(mnvalue<dis[v]){
                mnode=v;
                mnvalue=dis[v];
            }
            par[v]=u;
            dfs(v);
        }
    }
}
void dfs2(int node, int parent)
{
    cout<<node<<" ";
    for(int i=0;i<edge[node].size();i++){
        int v=edge[node][i];
        if(v!=parent){
            dfs2(v,node);
            cout<<node<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    memset(dis,-1,sizeof dis);
    mnvalue=-1;
    dis[1]=0;
    dfs(1);
    int root=mnode;
    memset(dis,-1, sizeof dis);
    memset(par,-1, sizeof par);
    mnvalue=-1;
    dis[mnode]=0;
    dfs(mnode);
    int endnode=mnode;

    //cout<<root<<" "<<endnode<<endl;
    cout<<2*(n-1)-dis[endnode]<<endl;

    int parent=-1;
    while(endnode!=-1){
        cout<<endnode<<" ";
        for(int i=0;i<edge[endnode].size();i++){
            int v=edge[endnode][i];
            if(v!=parent && v!=par[endnode]){
                dfs2(v,endnode);
                cout<<endnode<<" ";
            }
        }
        parent=endnode;
        endnode=par[parent];
    }

    return 0;
}
