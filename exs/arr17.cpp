#include <iostream>
#include "arr.h"

using namespace std;

void arr17::arr() 
{
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " ��° ���ڸ� �Է��ϼ��� : " << "";
		cin >> a[i];

		if (a[i] > 0)
			plus++;

		else if (a[i] < 0)
			minus++;

		else
			zero++;
	}

	cout << "���� ���� : " << plus << endl;
	cout << "0�� ���� : " << zero << endl;
	cout << "���� ���� : " << minus << endl;
}