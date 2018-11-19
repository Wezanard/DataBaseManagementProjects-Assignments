//////////////////////////// Test Program
#include <iostream>
#include <string>
#include "GenericStack.h"
using namespace std;

int main()
{
	Stack<int>intStack;//fill the stack with numbers 0-9 in ascending order
	for (int i = 0; i< 10; i++)
		intStack.push(i);

	while (!intStack.empty())//prints the stack(results will show number 9-0 in descending order)
	{
		cout<<intStack.pop() <<" ";
		cout<<endl;
	}

	Stack<string>stringStack;//creates a stack with the strings Chicago, Denver, London in that order
	stringStack.push("Chicago");
	stringStack.push("Denver");
	stringStack.push("London");

	while (!stringStack.empty())//prints the stack(results will show Londo, Denver, Chicago in that order)
	{
		cout<<stringStack.pop() <<" ";
		cout<<endl;
	}

	return 0;
}
