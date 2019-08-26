#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> arr, int key)
{
	int low = 0;
	int high = arr.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

void main51()
{
	vector<int> arr = { 1, 2, 3, 4, 5, 6 };
	cout << fun(arr, 3);

	system("pause");
}