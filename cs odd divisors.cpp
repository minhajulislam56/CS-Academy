#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL hisab(LL n)
{
    if(!n) return 0;
    LL k=(n+1)/2;
    return k*k+hisab(n/2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        LL a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        cout<<hisab(b)-hisab(a-1)<<endl;
    }

    return 0;
}
