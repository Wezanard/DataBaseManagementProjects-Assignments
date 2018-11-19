#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a;
	a = 7;
	int *p;
	p = &a;
	cout << *p << endl;
	a = 9;
	*p = 1;
	cout << *p << endl;
	return 0;
}
