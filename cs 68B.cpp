#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int ans=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int i2=0;i2<=n;i2++){
                for(int j2=0;j2<=m;j2++){
                    if(i==i2 && j==j2) continue;
                    if(gcd(abs(i2-i),abs(j2-j))+1==k) /** Numbers will be always coprime, that means gcd is 1 **/
                        ans++;
                }
            }
        }
    }
    cout<<ans/2<<endl;
    return 0;
}
