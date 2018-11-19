#include<iostream>
using namespace std;
int main()
{
	int count = 5;
	int* pCount = &count;

	cout << "prints the value of count " << count << endl;
	cout << "prints the current address of count " << &count << endl;
	cout << "also prints the current address of count " << pCount << endl;
	cout << "prints the value at the address held by the pointer " << *pCount << endl;

	return 0;
}