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

	cout << "�ּڰ� : " << min << endl;
	cout << "�ִ� : " << max << endl;
}

// a[0] == a*, a[1] == *(a+1) == *a+1

void arr18::input()
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " ��° ���ڸ� �Է��ϼ��� : " << "";
		cin >> a[i];

		max = min = a[0];
	}
}