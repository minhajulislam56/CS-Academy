#include<bits/stdc++.h>
using namespace std;
bool mark[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    string st[n+5];
    for(int i=1;i<=n;i++)
        cin>>st[i];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=j;k<=n;k++){

                if(j!=i && k!=i && j!=k){
                    if(st[i]==st[j]+st[k] || st[i]==st[k]+st[j]){
                        if(!mark[i]){
                            cout<<i<<" ";
                            mark[i]=1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
