#include <iostream>
#include <windows.h> // sleep �Լ��� ����ϱ� ���� �������
int main(void) // ������� �̸��� �����ϴ� �� �Է� �޾� ����ϴ� ���α׷�
{
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;
	Sleep(1000); // 1000ms == 1sec

	std::cout << "�����ϴ� ���α׷��� ���� �����Դϱ�? ";
	std::cin >> lang;
	Sleep(1000);

	std::cout << "�� �̸��� " << name << " �Դϴ�." << \n; // \n == std::endl (���� ����)
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	return 0;
}