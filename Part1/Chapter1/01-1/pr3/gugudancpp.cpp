#include <iostream>
using namespace std;

int main(void) // ���ڸ� �Է� �޾� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷�
{
	int num;
	cout << "����� ���� �Է��ϼ��� : ";
	cin >> num;

	for (int i = 1; i < 10; i++)
		cout << num << " * " << i << " = " << i * num << endl;
		
	return 0;
}