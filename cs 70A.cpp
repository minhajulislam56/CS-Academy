#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int cnt=-1,ans=a;
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++){
        int s=0,k=i;
        while(k){
            int m=k%10;
            if(m==0 || m==6 || m==9) s++;
            else if(m==8) s+=2;
            k/=10;
        }
        if(!i) ans=i,cnt=1;
        if(s>cnt) ans=i,cnt=s;
    }
    cout<<ans<<endl;

    return 0;
}
