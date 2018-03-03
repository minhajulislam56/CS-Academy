#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 100007
LL arr[MAX],mx[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    LL sum,minn=0,ans=-1*INT_MAX;
    mx[n-1]=arr[n-1];
    sum=arr[n-1];
    minn=min(minn,sum);
    for(int i=n-2;i>0;i--){
        sum+=arr[i];
        mx[i]=max(mx[i+1],sum-minn);
        minn=min(sum,minn);
        ans=max(ans,mx[i]);
    }
    sum=minn=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
        ans=max(ans,max(sum-minn+mx[i+2],sum-minn));
        minn=min(sum,minn);
    }
    cout<<ans<<endl;

    return 0;
}
