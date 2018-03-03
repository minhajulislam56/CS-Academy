#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string st;
    cin>>st;
    cout<<st[0];
    for(int i=1;i<st.length();i++){
        if(st[i]=='A' && st[i-1]=='A') continue;
        cout<<st[i];
    }
    cout<<endl;


    return 0;
}
