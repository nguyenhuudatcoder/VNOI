///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,n,x;
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
    while(t--)
    {
        ll ans=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ans=1ll*ans/__gcd(1ll*x,ans)*x%mod;
        }
        cout<<ans<<"\n";
    }
}