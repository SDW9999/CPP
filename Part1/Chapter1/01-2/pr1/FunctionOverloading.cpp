#include <iostream>
using namespace std;

void swap(int* n1, int* n2)
{
	int tmp = *n1; // tmp 변수를 활용하여 *n1, *n2 스와핑
	*n1 = *n2;
	*n2 = tmp;
}

void swap(char* c1, char* c2)
{
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void swap(double* d1, double* d2)
{
	double tmp = *d1;
	*d1 = *d2;
	*d2 = tmp;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double db1 = 1.111, db2 = 5.555;
	swap(&db1, &db2);
	cout << db1 << ' ' << db2 << endl;
}