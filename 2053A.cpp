///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,n,a[205];
bool check1(int x,int y)
{
    if(x+x<=y||y+y<=x||x+y<=y||x+y<=x)return 0;
    return 1;
}
// bool check2(int x,int y, int z)
// {
//     if(x+y<=z||x+z<=y||y+z<=x)return 0;
//     return 1;
// }
void ChatGPT()
{
    for(int i=0;i<n-1;i++)
        if(check1(a[i],a[i+1])){cout<<"YES\n";return;}cout<<"NO\n";
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
    cin>>t;
    while(t--){cin>>n;for(int i=0;i<n;i++)cin>>a[i];ChatGPT();}
}