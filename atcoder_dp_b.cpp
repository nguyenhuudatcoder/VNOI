/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int k;
int x[101000], dp[101000];
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        if(i>=2){
        dp[i] = 2e9;
        for (int j = i - 1; j >= i - k&&j>=1; j--)
            dp[i] = min(dp[i], dp[j] + abs(x[i] - x[j]));}
    }
    cout << dp[n];
}