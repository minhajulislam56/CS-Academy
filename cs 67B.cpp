#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,pos=0;
    long long mxneg=INT_MAX*-1,mnpos=INT_MAX,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        if(x>0){
            pos++;
            sum+=x;
            if(x<mnpos) mnpos=x;
        }
        else
            mxneg=max(mxneg,x);
    }

    if(!n%2) cout<<sum<<endl;
    else cout<<max(0LL,max(sum-mnpos,sum+mxneg));


    return 0;
}
