#include <iostream>
#include <windows.h>

using namespace std;

int main(void) // �Ǹſ����� �޿� ��� ���α׷� (�Ŵ� �⺻�޿� 50 + ��ǰ �Ǹ� ������ 12%)
{
	int pay = 0, salary = 0;

	while (true)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end) : ";
		cin >> pay;

		if (pay == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			Sleep(1000);
			break;
		}

		else
		{
			salary = 50 + (pay * 12 / 100);
			cout << "�̹� �� �޿� : " << salary << "����" << endl;
			Sleep(1000);
			continue;
		}
	}

	return 0;
}