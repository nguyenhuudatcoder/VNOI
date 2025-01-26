    /// Made by Nguyễn Hữu Đạt
    #include <bits/stdc++.h>
    #define ll long long
    #define kien main
    using namespace std;
    const ll inf = LLONG_MAX;
    const ll mod = 1e9 + 7;
    int n;
    int t[60005], r[60005];
    ll dp[60005][2];
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
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> t[i];
        for (int i = 1; i < n; i++)
            cin >> r[i];
        dp[1][0] = t[1];
        dp[1][1] = t[1];
        for (int i = 2; i <= n; i++)
        {
            dp[i][0] = min(dp[i - 1][0] + t[i], dp[i - 1][1] + t[i]);
            dp[i][1] = min(dp[i-2][0] + r[i - 1], dp[i - 2][1] + r[i - 1]);
        }
        cout << min(dp[n][0], dp[n][1]);
    }