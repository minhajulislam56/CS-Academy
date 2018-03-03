#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        const int p=(x==0)?1:64-__builtin_clzll(x);
        bitset<32> xx(x);
        bitset<32> yy(y);
        for(int i=0;i<p;i++){
            if(xx[i] && yy[i])
                xx[i]=0;
        }
        cout<<(xx).to_ulong()<<endl;
    }


    return 0;
}

