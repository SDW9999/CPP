#include <iostream>
using namespace std;

int main(void) // 숫자를 입력 받아 그 숫자에 해당하는 구구단을 출력하는 프로그램
{
	int num;
	cout << "출력할 단을 입력하세요 : ";
	cin >> num;

	for (int i = 1; i < 10; i++)
		cout << num << " * " << i << " = " << i * num << endl;
		
	return 0;
}