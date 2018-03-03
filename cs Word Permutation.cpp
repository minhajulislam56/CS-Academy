#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<string,int> > v;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        v.push_back(make_pair(s,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i].second<<" ";

    return 0;
}
