#include <iostream>
#include <windows.h>

using namespace std;

int main(void) // 판매원들의 급여 계산 프로그램 (매달 기본급여 50 + 물품 판매 가격의 12%)
{
	int pay = 0, salary = 0;

	while (true)
	{
		cout << "판매 금액을 만원 단위로 입력 (-1 to end) : ";
		cin >> pay;

		if (pay == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			Sleep(1000);
			break;
		}

		else
		{
			salary = 50 + (pay * 12 / 100);
			cout << "이번 달 급여 : " << salary << "만원" << endl;
			Sleep(1000);
			continue;
		}
	}

	return 0;
}