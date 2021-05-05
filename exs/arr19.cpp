#include <iostream>
#include "arr.h"

using namespace std;

void arr19::ex1()
{
	ptr = a + 9;
	for (int i = 0; i < 10; i++)
	{
		cout << " a[" << 9 - i << "] = " << *(ptr - i) << endl;
	}
}

void arr19::ex2()
{
	ptr = a; // ptr -> a 주소
	ptr += 2; // a[2] 이동
	*ptr = 20; // a[2] = 20 , *ptr == 2차원 포인터 (: 1차원 포인터의 주소값을 저장, 1차원 포인터를 가리킴)
	*(ptr + 1) = 30; // a[3] = 30
	ptr--; // a[1] 이동
	*ptr = 40; // a[1] = 40;

	for (int i = 0; i < 5; i++)
	{
		cout << "a[ " << i << " ] = " << a[i] << endl;
	}
}