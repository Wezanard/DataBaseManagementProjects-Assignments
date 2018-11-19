#include "thinker.h"
#include <stdlib.h>
#include <cstring> //Inclued the cstring library.
#include <iostream>
#include <assert.h> //Included the assert library.
using namespace std;
int main()
{
	thinking_cap student;
	thinking_cap fan;
	student.slots( "Hello", "Goodbye" );
	fan.slots( "Go Cougars!", "Boo!" );
	student.push_green();
	fan.push_green();
	student.push_red();
	return 0;
}
void thinking_cap::slots(char new_green[ ], char new_red[ ])
{
	assert(strlen(new_green) < 50);
	assert(strlen(new_red) < 50);
	strcpy(green_string, new_green);
	strcpy(red_string, new_red);
}
void thinking_cap::push_green() const//Requires const because declared in other class.
{
	cout << green_string << endl;
}
void thinking_cap::push_red() const//Requires const because declared in other class.
{
	cout << red_string << endl;
}