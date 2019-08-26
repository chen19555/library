#include <iostream>
#include <algorithm>
using namespace std;

int fun2(string str1, string str2)
{
	int len1 = str1.size();
	int len2 = str2.size();
	const int MAX = 20;
	int dp[MAX][MAX] = { 0 };
	int ans = 0;
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (i == 0 && j == 0)
			{
				dp[i][j] = (str1[0] == str2[0]) ? 1 : 0;
			}
			else if (i == 0 && j > 0)
			{
				dp[i][j] = min(1, dp[0][j - 1] + (str1[0] == str2[j]) ? 1 : 0);
			}
			else if (i > 0 && j == 0)
			{
				dp[i][j] = min(1, dp[i - 1][0] + (str1[i] == str2[0]) ? 1 : 0);
			}
			else
			{
				if (str1[i] == str2[j] && str1[i - 1] == str2[j - 1])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else if (str1[i] == str2[j] && str1[i - 1] != str2[j - 1])
				{
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
			ans = max(ans, dp[i][j]);
		}
	}
	return ans;
}

void main06132()
{
	string str1 = "myournameis";
	string str2 = "yournameisv";

	cout << fun2(str1, str2) << endl;

	system("pause");
}