#include <iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1);
/* ù ��° �Ű��������� ����Ʈ ���� �������� ���� => ����
 * �Լ� ȣ�� �� �ݵ�� �ϳ� �̻��� ���ڸ� �����ؾ� �� */

int main(void)
{
	cout << BoxVolume(3, 3, 3) << endl;
	cout << BoxVolume(5, 5) << endl; // ������ �κ��� ����Ʈ ������ ��ü
	cout << BoxVolume(7) << endl;
	cout << BoxVolume() << endl; // ������ ����
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
