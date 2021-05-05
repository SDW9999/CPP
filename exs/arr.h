#include <iostream>
using namespace std;

class arr13 {
public:
	int a[10];
	void arr();
};

class arr15 {
public :
	int a[5];
	int b[5];
	void arr();
};

class arr17 {
public :
	int a[10];
	int zero = 0;
	int plus = 0;
	int minus = 0;
	void arr();
};

class arr18 {
public:
	int a[5];
	int max = 0;
	int min = 0;
	void input();
	void maxmin();

};

class arr19 {
public :
	int a[10] = { 10,10,10,10,50 };
	int* ptr;
	void ex1();
	void ex2();
};