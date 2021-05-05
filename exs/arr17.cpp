#include <iostream>
#include "arr.h"

using namespace std;

void arr17::arr() 
{
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " 번째 숫자를 입력하세요 : " << "";
		cin >> a[i];

		if (a[i] > 0)
			plus++;

		else if (a[i] < 0)
			minus++;

		else
			zero++;
	}

	cout << "양의 개수 : " << plus << endl;
	cout << "0의 개수 : " << zero << endl;
	cout << "음의 개수 : " << minus << endl;
}