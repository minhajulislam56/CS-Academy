#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string st, al;

    cin>>st>>al;

    for(int i=0;i<st.length();i++){
        st[i]=al[st[i]-'a'];
    }
    cout<<st<<endl;

    return 0;
}

