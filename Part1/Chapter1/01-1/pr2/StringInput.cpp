#include <iostream>
using namespace std;

int main(void) // 사용자의 이름과 전화번호를 문자열의 형태로 입력 받아 출력하는 프로그램
{
	string name, phoneNumber;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "전화번호를 입력하세요 : ";
	cin >> phoneNumber;

	cout << "이름 : " << name << endl;
	cout << "전화번호 : " << phoneNumber << endl;
}