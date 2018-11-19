#include <iostream>
using namespace std;
template <class T>
T maxValue(T value1, T value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

int main()
{
	cout << maxValue(1, 2) << endl;
	cout << maxValue(3.5, 2.2) << endl;
	return 0;
}