#include <iostream>
using namespace std;

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	int height = 1;
	return length * width * height; // return length * width * 1;
}

int BoxVolume(int length)
{
	int width = 1;
	int height = 1;
	return length * width * height; // return length * 1 * 1;
}

/*
int BoxVolume(void)
{
	int length = 1;
	int width = 1;
	int height = 1;
	return length * width * height;
}
*/

int main(void) // �Լ� �����ε��� ���·� �� ���� (�����Լ�, ������ ����)
{
	cout << BoxVolume(3, 3, 3) << endl;
	cout << BoxVolume(5, 5) << endl;
	cout << BoxVolume(7) << endl;
	//cout << BoxVolume() << endl;
	return 0;
}