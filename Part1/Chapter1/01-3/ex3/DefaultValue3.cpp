#include <iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1);
/* 첫 번째 매개변수에서 디폴트 값이 지정되지 않음 => 에러
 * 함수 호출 시 반드시 하나 이상의 인자를 전달해야 함 */

int main(void)
{
	cout << BoxVolume(3, 3, 3) << endl;
	cout << BoxVolume(5, 5) << endl; // 부족한 부분은 디폴트 값으로 대체
	cout << BoxVolume(7) << endl;
	cout << BoxVolume() << endl; // 컴파일 에러
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
