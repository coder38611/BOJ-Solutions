#include <iostream>
using namespace std;

long long mod = 1e9 + 9;
long long dp[100001][4];
int main()
{
    int t, n;
    scanf("%d", &t);
    dp[1][1] = dp[2][2] = dp[3][3] = dp[3][2] = dp[3][1] = 1;
    for (int i = 4; i < 100001; i++)
    {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % mod;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % mod;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % mod;
    }
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", (dp[n][1] + dp[n][2] + dp[n][3]) % mod);
    }
}