#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX_LENGTH = 50;

int maxLength(string str1, string str2)
{
	int len1 = str1.size();
	int len2 = str2.size();

	int dp[MAX_LENGTH][MAX_LENGTH] = { 0 };

	for (int i = 0; i < len1; i++)
	{
		if (str1[i] == str2[0])
		{
			dp[i][0] = 1;
		}
	}
	for (int j = 0; j < len2; j++)
	{
		if (str2[j] == str1[0])
		{
			dp[0][j] = 1;
		}
	}

	for (int i = 1; i < len1; i++)
	{
		for (int j = 1; j < len2; j++)
		{
			if (str1[i] == str2[j])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}

	return dp[len1 - 1][len2 - 1];
}

void main41()
{
	string str1 = "jsafpoisghd";
	string str2 = "jfiopgnvpd";

	int res = maxLength(str1, str2);

	cout << "最长公共子序列长度为：" << res << endl;

	system("pause");
}