#include <bits/stdc++.h>
//求的斐波那契数列
using namespace std;
#define ll long long
int dp[5001][10000];
int len = 1;
void f(int x)
{
  for (int i = 0; i < len; i++)
  {
    dp[x][i] = dp[x - 1][i] + dp[x - 2][i];
  }
  for (int i = 0; i < len; i++)
  {
    if (dp[x][i] > 9)
    {
      dp[x][i + 1] += dp[x][i] / 10;
      dp[x][i] %= 10;
    }
  }
  if (dp[x][len])
    len++;
}
int n;
int main()
{
  cin >> n;
  if(n==0){
    cout<< 0;
    return 0;
  }
  dp[0][0] = dp[1][0] = 1;
  for (int i = 2; i <= n; i++)
  {
    f(i);
  }
  for (int i = len - 1; i >= 0; i--)
  {
    cout << dp[n][i];
  }
}
