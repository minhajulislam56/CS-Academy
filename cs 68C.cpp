#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
#define si(n) scanf("%d",&n);
inline int lowbit(int x){return x&(-x);}
struct points{
    int x,y,pos;
    bool operator<(const points &cnt)const{
        return ((1LL*y)*(cnt.x*1LL))<((1LL*cnt.y)*(x*1LL));
    }

}arr[MAX];
int sum[MAX],ans[MAX];
int query(int pos)
{
    int s=0;
    while(pos>0){
        s+=sum[pos];
        pos-=pos&(-pos);
    }
    return s;
}
void update(int pos)
{
    while(pos<=MAX){
        sum[pos]++;
        pos+=pos&(-pos);
    }
}
int main()
{
    int n;
    si(n);

    for(int i=1;i<=n;i++){
        si(arr[i].x);
        si(arr[i].y);
        arr[i].pos=i;
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        ans[arr[i].pos]=query(arr[i].x);
        update(arr[i].x);
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",ans[i]);
    return 0;
}
