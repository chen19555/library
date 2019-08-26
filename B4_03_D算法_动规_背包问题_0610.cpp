/*
01背包问题
N件物品，容量为V的背包
第 i 件的体积为 volume[i], 价值为 cost[i]
F[i][v] = max(F[i - 1][v], F[i - 1][v - volume[i]] + cost[i])
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 100;
const int MAX_M = 1000;

int dp[MAX_N + 1][MAX_M + 1];

void solve1()
{
	int N = 50; // 数量
	int V = 100; // 体积
	vector<int> volume(N, 0); //每件体积
	vector<int> cost(N, 0); // 每件价值
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j <= V; j++)
		{
			if (j < volume[i])
			{
				dp[i][j] = dp[i + 1][j];
			}
			else
			{
				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - volume[i]] + cost[i]);
			}
		}
	}
	cout << dp[0][V];
}

void solve()
{
	int N = 50; // 数量
	int V = 100; // 体积
	vector<int> volume(N, 0); //每件体积
	vector<int> cost(N, 0); // 每件价值

	for (int i = 0; i < V; i++)
	{
		if (i >= volume[0])
		{
			dp[0][i] = cost[0];
		}
		else
		{
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j <= V; j++)
		{
			if (j >= volume[i])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - volume[i]] + cost[i]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[N - 1][V];
}