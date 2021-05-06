#include <iostream>
using namespace std;

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main(void)
{
	cout << SimpleFunc() << endl;
	cout << SimpleFunc() << endl;
} // 함수 호출 시 Simple(int a)와 Simple(void) 모두 조건을 만족하기 때문에 컴파일 에러 발생