#include <stdio.h>
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
static const int N = 10000;
int main()
{ 
	clock_t begin = clock();
	clock_t OB, OE;
	int timesRound=1;
	int numONum =0;
	int i;
	vector<bool> a(N);
	for (i = 2; i < N; i++) 
	{
		a[i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		if (a[i])
		{
			for (int j = i; j*i < N; j++)
			{
				a[i*j] = 0;
			}
		}
	}
	for (i = 2; i < N; i++)
	{
		if (a[i])
		{
			OB = clock();
			if(timesRound<10)
			{
				cout << " " << i;
				timesRound++;
			}
			if(timesRound==10)
			{
				cout << " " << i;
				cout << endl;
				timesRound=1;
			}
			numONum++;
			OE = clock();
		}
	}
	cout << endl;
	cout << "Number of Prime Numbers found: " << numONum << endl;
	clock_t end = clock();
	double elasped_secs = double((end - begin)-((OE -OB)*numONum)) / CLOCKS_PER_SEC;
	cout << "Code ran for: " << elasped_secs << " seconds." << endl;
}