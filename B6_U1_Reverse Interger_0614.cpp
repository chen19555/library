#include <iostream>
#include <algorithm>
using namespace std;


int reverse(int x) {
	if (x <= -pow(2, 31) || x > pow(2, 32) - 1)
	{
		return 0;
	}

	bool isNative = (x >= 0) ? true : false;

	int abs_x = abs(x);
	int val;
	long long res_int = 0;
	int i = -1;
	while (abs_x > 0)
	{
		abs_x /= 10;
		i++;
	}

	abs_x = abs(x);
	while (abs_x > 0)
	{
		val = abs_x % 10;
		abs_x /= 10;
		res_int += val*pow(10, i--);
	}

	if (res_int > pow(2, 31) - 1)
	{
		return 0;
	}

	if (!isNative)
	{
		res_int = -res_int;
	}

	if (res_int >= -pow(2, 31))
	{
		return res_int;
	}
	else
	{
		return 0;
	}


}

void main61()
{
	//reverse(-2147483648);


	system("pause");
}