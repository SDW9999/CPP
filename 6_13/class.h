#include <iostream>
using namespace std;

class CRect {
	int left;
	int top;
	int right;
	int bottom;
public :
	void print();
	void SetRect(int l, int t, int r, int b);
};