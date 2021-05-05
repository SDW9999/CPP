#include <iostream>
#include "arr.h"
using namespace std;

void arr13::arr()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " 번째 숫자를 입력해주세요 : " << "";
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
}