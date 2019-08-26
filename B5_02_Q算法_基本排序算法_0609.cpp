#include <vector>
#include <iostream>
using namespace std;

// 1. 冒泡法，[O(n^2,n,n^2--1)]， 稳定
vector<int> bubbleSort(vector<int> arr)
{
	int len = arr.size();
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return arr;
}

// 2. 选择排序,[O(n^2, n^2?, n^2--1)], 不稳定
vector<int> selectionSort(vector<int> arr)
{
	int len = arr.size();
	for (int i = 0; i < len; i++)
	{
		int min_index = i;
		for (int j = i; j < len; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[min_index], arr[i]);
	}
	return arr;
}

//插入排序, [O(n^2, n, n^2 -- 1)], 稳定
vector<int> insertionSort(vector<int> arr)
{
	int len = arr.size();
	for (int i = 1; i < len; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return arr;
}

//希尔排序, [O(n^1.3, n, n^2 -- 1)], 不稳定
vector<int> shellSort(vector<int> arr)
{
	int len = arr.size();
	int k = 1;
	while (k < len / 3)
	{
		k *= 3;
	}
	while (k >= 1)
	{
		for (int i = k; i < len; i++)
		{
			for (int j = i - k; j >= 0; j = j - k)
			{
				if (arr[j] > arr[j + k])
				{
					swap(arr[j], arr[j + k]);
				}
			}
		}
		k = k / 3;
	}
	return arr;
}

//归并排序, O[(nlogn, nlogn, nlogn, -- n)], 稳定
void merge(vector<int> &arr, int low, int mid, int high)
{
	vector<int> tmp(arr);
	int i = low;
	int j = mid + 1;
	for (int k = low; k <= high; k++)
	{
		if (i > mid)
		{
			arr[k] = tmp[j++];
		}
		else if (j > high)
		{
			arr[k] = tmp[i++];
		}
		else if (tmp[i] < tmp[j])
		{
			arr[k] = tmp[i++];
		}
		else
		{
			arr[k] = tmp[j++];
		}
	}
}

void m_sort(vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int mid = low + (high - low) / 2;
		m_sort(arr, low, mid);
		m_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

vector<int> mergeSort(vector<int> &arr)
{
	m_sort(arr, 0, arr.size() - 1);
	return arr;
}

//快速排序, [O(nlogn, nlogn, n^2 --logn)], 不稳定
int patition(vector<int> &arr, int low, int high)
{
	int pivot = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] >= pivot)
		{
			high--;
		}
		swap(arr[low], arr[high]);
		while (low < high && arr[low] < pivot)
		{
			low++;
		}
		swap(arr[low], arr[high]);
	}
	return low;
}

void q_sort(vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int pivot = patition(arr, low, high);
		q_sort(arr, low, pivot - 1);
		q_sort(arr, pivot + 1, high);
	}
}

vector<int> quickSort(vector<int> &arr)
{
	q_sort(arr, 0, arr.size() - 1);
	return arr;
}

//堆排序 [O(nlogn, nlogn, nlogn --1)], 不稳定
void heap(vector<int> &arr, int start, int end)
{
	int tmp = arr[start];
	int i = start;
	int j = i * 2 + 1;
	while (j <= end)
	{
		if (j + 1 <= end && arr[j] < arr[j + 1])
		{
			j++;
		}
		if (arr[j] < tmp)
		{
			break;
		}
		else
		{
			arr[i] = arr[j];
			i = j;
			j = i * 2 + 1;
		}
	}
	arr[i] = tmp;
}

vector<int> heapSort(vector<int> &arr)
{
	for (int i = (arr.size() - 1) / 2; i >= 0; i--)
	{
		heap(arr, i, arr.size() - 1);
	}
	for (int i = arr.size() - 1; i > 0; i--)
	{
		heap(arr, 0, i);
		swap(arr[0], arr[i]);
	}
	return arr;
}

void main52()
{
	vector<int> arr = { 6, 5, 4, 3, 2, 1 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << ends;
	}
	cout << endl;
	vector<int> res;
	//res = bubbleSort(arr);
	//res = selectionSort(arr);
	//res = insertionSort(arr);
	res = shellSort(arr);
	//res = mergeSort(arr);
	//res = quickSort(arr);
	//res = heapSort(arr);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << res[i] << ends;
	}
	cout << endl;

	system("pause");
}
