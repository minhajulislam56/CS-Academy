#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double s,k,q;
    cin>>s>>q>>k;
    vector<int> p;
    for(int i=0;i<(int)q;i++){
        int x;
        cin>>x;
        p.push_back(x);
    }
    sort(p.begin(),p.end());

    for(int i=0;i<(int)q;i++){
        if(k>=((s*(p[i]*1.0))/100.0))
            s+=k;
        else
            s+=((s*(p[i]*1.0))/100.0);
    }
    printf("%.11lf\n", s);

    return 0;
}
