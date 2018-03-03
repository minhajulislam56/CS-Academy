#include<bits/stdc++.h>
using namespace std;
map<int,int> mark;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mark[x]++;
    }
    vector<int> vec(t+1,0);
    map<int,int>::iterator itr;
    for(itr=mark.begin();itr!=mark.end();itr++){
        int val=itr->first, num=itr->second;
        for(int j=val;j<=t;j+=val){
            vec[j]+=num;
        }
    }
    int maxx=0, rep=0;
    for(int i=1;i<=t;i++){
        if(vec[i]>maxx){
            maxx=vec[i];
            rep=0;
        }
        if(vec[i]==maxx)
            rep++;
    }
    cout<<maxx<<" "<<rep<<endl;

    return 0;
}
