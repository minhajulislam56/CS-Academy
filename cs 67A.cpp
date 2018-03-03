#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    int ans=0;

    for(int i=1;i<=n;i++){
        int j=i,k=1,m=0;
        while(k<=n){
            if(j>n) j=1;
            if(arr[j]==k) m++;
            j++,k++;
        }
        ans=max(ans,m);
    }
    cout<<ans<<endl;

    return 0;
}
