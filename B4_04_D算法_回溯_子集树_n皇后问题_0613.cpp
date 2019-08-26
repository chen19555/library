/*
DFS�ͻ��ݷ�
<
1. DFS��Ŀ���Ǳ������нڵ㣬�����ݷ���Ŀ�����ҳ���ռ䣨��������
2. DFS�������������е㣬�����������е�
3. ���ݷ������������㣬������������㣨�����������
>

<
���ݷ���ռ����Ӽ�����������
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
	cout << "�� " << ++counter << " �����Ϊ�� ";
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

