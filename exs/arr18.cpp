#include <iostream>
#include "arr.h"

using namespace std;

void arr18::maxmin()
{
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			cout << "max : " << max << endl;
		}

		else if (a[i] < min)
		{
			min = a[i];
			cout << "min : " << min << endl;
		}
	}

	cout << "최솟값 : " << min << endl;
	cout << "최댓값 : " << max << endl;
}

// a[0] == a*, a[1] == *(a+1) == *a+1

void arr18::input()
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " 번째 숫자를 입력하세요 : " << "";
		cin >> a[i];

		max = min = a[0];
	}
}