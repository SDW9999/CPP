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
	ptr = a; // ptr -> a �ּ�
	ptr += 2; // a[2] �̵�
	*ptr = 20; // a[2] = 20 , *ptr == 2���� ������ (: 1���� �������� �ּҰ��� ����, 1���� �����͸� ����Ŵ)
	*(ptr + 1) = 30; // a[3] = 30
	ptr--; // a[1] �̵�
	*ptr = 40; // a[1] = 40;

	for (int i = 0; i < 5; i++)
	{
		cout << "a[ " << i << " ] = " << a[i] << endl;
	}
}