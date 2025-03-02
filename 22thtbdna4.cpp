/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string dp[105][105];
int n, m;
int x, y;
string bigplus(string a, string b)
{
    string c = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    bool rem = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int res = a[i] + b[i] - 2 * '0';
        res+=rem;
        c = char(res % 10 + '0') + c;
        rem = res / 10;
    }
    if(rem==1)c='1'+c;
    return c;
}
kien()
{
    if(fopen("robot.inp","r"))
    {
    	freopen("robot.inp","r",stdin);
    	freopen("robot.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        dp[x][y] = "0";
    }
    dp[1][1] = "1";
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (dp[i][j].empty())
                dp[i][j] = bigplus(dp[i - 1][j], dp[i][j - 1]);
        }
    cout<<dp[n][n];
}