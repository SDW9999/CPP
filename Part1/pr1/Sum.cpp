#include <iostream>
using namespace std;

int main(void)
{
	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> num[i];
		sum += num[i];
	}

	cout << "�հ� : " << sum << endl;
	return 0;
}