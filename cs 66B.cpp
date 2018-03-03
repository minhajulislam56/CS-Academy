#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long int,long int> a, pair<long int,long int> b)
{
    return a.first<b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<pair<long int,long int> > vec;
    for(int i=0;i<n;i++){
        long int p,d;
        cin>>p>>d;
        vec.push_back(make_pair(p,d));
    }
    sort(vec.begin(),vec.end(),comp);
    long long int ans=x, curr=0,tmp;
    for(int i=0;i<n;i++){
        curr+=vec[i].second;
        if(vec[i].first<=x){
            ans=min(ans,x-curr);
        }
        else{
            ans=min(ans,vec[i].first-curr);
            //tmp=vec[i].first-curr;
            //if(tmp<=x && tmp<ans) ans=tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
