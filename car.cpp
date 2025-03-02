///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll ans;
int d;
struct car{
    int a,b,c;
};
car a[100005];
bool cmp(car a,car b)
{
    return 1.0*a.a/a.b>1.0*b.a/b.b;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i].a;
    for(int i=0;i<n;i++){cin>>a[i].b;a[i].c=i;}
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        d+=a[i].b;
        ans+=1ll*a[i].a*d;
    }
    cout<<ans<<'\n';
    for(int i=0;i<n;i++)
        cout<<a[i].c+1<<" ";
}