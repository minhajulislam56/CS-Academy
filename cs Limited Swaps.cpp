#include<bits/stdc++.h>
using namespace std;
#define MAX 100007
int tree[4*MAX], cnt[4*MAX], arr[MAX];
void segment(int node, int b, int e)
{
    if(b==e){
        tree[node]=arr[b];
        cnt[node]=1;
        return;
    }
    int left,right,mid;
    left=node*2;
    right=node*2+1;
    mid=(b+e)/2;
    segment(left,b,mid);
    segment(right,mid+1,e);
    cnt[node]=cnt[left]+cnt[right];
    tree[node]=max(tree[left],tree[right]);
}
int maxValue(int node, int b, int e, int k)
{
    if(cnt[node]<=k) return tree[node];
    int mid=(b+e)/2;
    if(cnt[node*2]<k){
        return max(tree[node*2],maxValue(node*2+1,mid+1,e,k-cnt[node*2]));
    }
    return maxValue(node*2,b,mid,k);
}
int lessNumber(int node, int b, int e, int mval)
{
    if(b==e){
        tree[node]=-1;
        cnt[node]=0;
        return 0;
    }
    int mid=(b+e)/2,ans=0;
    if(tree[node*2]>=mval){
        ans=lessNumber(node*2,b,mid,mval);
    }
    else{
        ans=cnt[node*2]+lessNumber(node*2+1,mid+1,e,mval);
    }
    cnt[node]=cnt[node*2]+cnt[node*2+1];
    tree[node]=max(tree[node*2],tree[node*2+1]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++)
        cin>>arr[i];
    segment(1,1,n);
    for(int i=1;i<=n;i++){
        int val=maxValue(1,1,n,k+1);
        int ln=lessNumber(1,1,n,val);
        arr[i]=val;
        k-=ln;
        //cout<<ln<<endl;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
