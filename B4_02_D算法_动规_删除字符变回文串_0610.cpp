#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX 50

int fun(string str)
{
	int len = str.size();
	
	int dp[MAX][MAX] = { 0 };

	for (int i = len - 2; i >= 0; i--)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
			{
				dp[i][j] = dp[i + 1][j - 1];
			}
			else
			{
				dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
			}
		}
	}

	return dp[0][len - 1];
}

void main42()
{
	string str1 = "aevffer";
	int res = fun(str1);

	cout << "the result is:" << res << endl;

	system("pause");
}