#include <iostream>
#include <vector>
using namespace std;

void perm(vector<int>& arr, int start, int end)
{
	if (start == end)
	{
		for (auto i : arr)
		{
			cout << i << ends;
		}
		cout << endl;
	}
	else
	{
		for (int i = start; i <= end; i++)
		{
			swap(arr[start], arr[i]);
			perm(arr, start + 1, end);
			swap(arr[start], arr[i]);
		}
	}
}

void main()
{
	vector<int> arr = { 1, 2, 3, 4, 5 };
	perm(arr, 0, arr.size() - 1);

	system("pause");
}