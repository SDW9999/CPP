#include <iostream>
using namespace std;

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main(void)
{
	cout << SimpleFunc() << endl;
	cout << SimpleFunc() << endl;
} // �Լ� ȣ�� �� Simple(int a)�� Simple(void) ��� ������ �����ϱ� ������ ������ ���� �߻�