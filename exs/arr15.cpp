#include <iostream>
#include "arr.h"
using namespace std;

void arr15::arr()
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " 번째 숫자를 입력해주세요 : " << "";
		cin >> a[i];
		b[i] = a[i];
	}

	for (int i = 0; i < 5; i++)
		cout << b[i] << endl;
}