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

int main(void) // 함수 오버로딩의 형태로 재 구현 (메인함수, 실행결과 동일)
{
	cout << BoxVolume(3, 3, 3) << endl;
	cout << BoxVolume(5, 5) << endl;
	cout << BoxVolume(7) << endl;
	//cout << BoxVolume() << endl;
	return 0;
}