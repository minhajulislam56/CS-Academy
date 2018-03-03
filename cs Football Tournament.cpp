#include<bits/stdc++.h>
using namespace std;
int res[107];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            if(!x) continue;
            if(x==1)
                res[i]++;
            else
                res[j]++;
        }
    }
    int mx=-1, tem;
    for(int i=0;i<n;i++){
        if(res[i]>mx){
            mx=res[i];
            tem=i;
        }
    }
    cout<<tem+1<<endl;

    return 0;
}
