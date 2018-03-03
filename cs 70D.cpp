#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ULL n,k,d,rm,dd,fp,ans;
    cin>>n>>k;

    d=k/2;
    rm=n-d;
    if(rm/2<d){
        cout<<-1<<endl;
        return 0;
    }
    dd=rm/2;

    fp=dd+d;
    vector<ULL> a1,a2,re;
    ans=dd/(k-d);
    for(int i=1;i<=k-d;i++){
        if(i==k-d && (dd%(k-d)!=0))
            a1.push_back(ans+(dd%(k-d)));
        else
            a1.push_back(ans);
    }
    ans=fp/d;
    for(int i=1;i<=d;i++){
        if(i==d && fp%d!=0)
            a2.push_back(ans+fp%d);
        else
            a2.push_back(ans);
    }
    for(int i=0;i<max(a1.size(),a2.size());i++){
        if(i<a1.size())
            re.push_back(a1[i]);
        if(i<a2.size())
            re.push_back(a2[i]);
    }
    for(int i=0;i<re.size();i++){
        if(re[i-1]!=re[i])
            cout<<re[i]<<" ";
        else
            re.push_back(re[i]);
    }
    return 0;
}
