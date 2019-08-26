/*
DFS和回溯法
<
1. DFS的目的是遍历所有节点，而回溯法的目的是找出解空间（解向量）
2. DFS无条件遍历所有点，甚至处理所有点
3. 回溯法有条件遍历点，并有条件输出点（输出解向量）
>

<
回溯法解空间有子集树和排列树
>
*/

#include <iostream>
#include <vector>
using namespace std;

const int MAX = 20;
vector<int> arr(MAX);
int counter = 0;

void display(int n)
{
	cout << "第 " << ++counter << " 个结果为： ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ends;
	}
	cout << endl;
}

bool cond(int k, int i)
{
	if (k == 0)
	{
		return true;
	}
	else
	{
		for (int j = 0; j < k; j++)
		{
			if (arr[j] == i || abs(arr[j] - i) == abs(j - k))
			{
				return false;
			}
		}
	}
	return true;
}

void queen(int k, int n)
{
	if (k >= n)
	{
		display(n);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (cond(k, i))
			{
				arr[k] = i;
				queen(k + 1, n);
			}
		}
	}
}

void main44()
{
	queen(0, 8);

	system("pause");
}

