#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=1;
    cin>>n;
    vector<string> words;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        sort(st.begin(),st.end());
        mp[st]++;
        ans=max(ans,mp[st]);
    }
    cout<<ans<<endl;

    return 0;
}

