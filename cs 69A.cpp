#include<bits/stdc++.h>
using namespace std;
int win[1007],pok[1007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>pok[i];
    if(pok[0]>pok[1]){
        win[0]++,w=0;
    }
    else
        win[1]++,w=1;

    for(int i=2;i<n;i++){
        if(pok[w]>pok[i])
            win[w]++;
        else
            win[i]++,w=i;
    }
    for(int i=0;i<n;i++) cout<<win[i]<<" ";

    return 0;
}
