#include <iostream>
#include "arr.h"
using namespace std;

void arr15::arr()
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " ��° ���ڸ� �Է����ּ��� : " << "";
		cin >> a[i];
		b[i] = a[i];
	}

	for (int i = 0; i < 5; i++)
		cout << b[i] << endl;
}