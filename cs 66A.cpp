#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> ale,bor;
    for(int i=0;i<n;i++){
        int xx;
        cin>>xx;
        ale.push_back(xx);
    }
    sort(ale.rbegin(),ale.rend());
    for(int i=0;i<m;i++){
        int xx;
        cin>>xx;
        bor.push_back(xx);
    }
    sort(bor.rbegin(),bor.rend());
    int a=0,b=0;
    for(int i=0;i<min(m,n);i++){
        if(ale[i]>bor[i]) a++;
        else b++;
    }
    cout<<a<<" "<<b<<endl;


    return 0;
}
