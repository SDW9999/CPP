#include <iostream>
#include <windows.h> // sleep 함수를 사용하기 위한 헤더파일
int main(void) // 사용자의 이름과 좋아하는 언어를 입력 받아 출력하는 프로그램
{
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;
	Sleep(1000); // 1000ms == 1sec

	std::cout << "좋아하는 프로그래밍 언어는 무엇입니까? ";
	std::cin >> lang;
	Sleep(1000);

	std::cout << "내 이름은 " << name << " 입니다." << \n; // \n == std::endl (역할 같음)
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	return 0;
}