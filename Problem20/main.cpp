#include<iostream> // Provides cout and cin
#include<cstdlib> // Provides EXIT_SUCCESS and size_t
#include<cassert> // Provides assert
using namespace std;

// PROTOTYPES for functions used by this demonstration program
void allocate_doubles(double*& p, size_t& n);
// Postcondition: The user has been prompted for a size n, and this size has been read.
// The pointer p has been set to point to a new dynamic array containing n doubles. 
// NOTE: If there is insufficient dynamic memory, then bad_alloc is thrown.

void fill_array(double data[ ], size_t n);
// Precondition:  data is an array with at least n components.
// Postcondition: The user has been prompted to type n doubles, and these
// numbers have been read and placed in the first n components of the array.

double average(const double data[ ], size_t n);
// Precondition:  data is an array with at least n components, and n > 0.
// Postcondition: The value returned is the average of data[0]..data[n-1].

void compare(const double data[ ], size_t n, double value);
// Precondition:  data is an array with at least n components.
// Postcondition: The values data[0]..data[n-1] have been printed with a
// message saying whether they are above, below, or equal to value.


int main()
{
	double *numbers;
	size_t array_size;
	double mean_value;

	cout<<"This program will compute the average of some numbers. The\n";
	cout<<"numbers will be stored in an array of doubles that I allocate.\n";
	allocate_doubles(numbers, array_size);


	fill_array(numbers, array_size);
	mean_value = average(numbers, array_size);


	cout<<"The average is: "<< mean_value << endl;
	compare(numbers, array_size, mean_value);
	cout<<"This was a mean program.";

	return EXIT_SUCCESS;
}



void allocate_doubles(double*& p, size_t& n)
// Library facilities used: iostream.h, stdlib.h
{
	cout<<"How many doubles should I allocate?"<<endl;
	cout<<"Please type a positive integer answer: ";
	cin>> n; 
	p = new double[n];
}

void fill_array(double data[ ], size_t n)
// Library facilities used: cstdlib
{
	size_t i;
	cout<<"Please type "<< n <<" double numbers: "<<endl;

	for (i = 0; i< n; ++i) 
	cin>> data[i];       
}

void compare(const double data[ ], size_t n, double value)
{
	size_t i;

	for (i = 0; i< n; ++i)
	{
		cout<< data[i];
		if (data[i] < value)     
			cout<<" is less than ";
		else if (data[i] > value) 
			cout<<" is more than ";
		else
			cout<<" is equal to  ";
			cout<< value <<endl;
	}
}

double average(const double data[ ], size_t n)
// Library facilities used: cassert, cstdlib
{
	size_t i;   
	double sum; 

	assert(n > 0);

	sum = 0;
	for (i = 0; i< n; ++i) 
		sum += data[i];
	return (sum/n);      
}
