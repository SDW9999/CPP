#include <iostream>
#include "class.h"

using namespace std;

void CRect::print()
{
	cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << endl;
}

void CRect::SetRect(int l, int t, int r, int b)
{
	left = l;
	top = t;
	right = r;
	bottom = b;
}

/*
void main()
{
	CRect rc;
	rc.SetRect(0, 0, 20, 20);
	rc.print();
}
*/