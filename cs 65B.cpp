#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> edge[n+5];
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        for(int j=0;j<edge[u].size();j++){
            if(edge[u][j]==v){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
