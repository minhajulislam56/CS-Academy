#include<bits/stdc++.h>
using namespace std;
long long p[5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        p[x%3]++;
    }
    long long ans=(p[0]*(p[0]-1))/2;
    ans+=p[1]*p[2];

    cout<<ans<<endl;

    return 0;
}
