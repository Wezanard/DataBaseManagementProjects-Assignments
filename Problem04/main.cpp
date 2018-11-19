#include <iostream>
#include <cstdio>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    int ranNum;
    int result=0;
    int count=1;
    clock_t start;
    double timer;
    srand(time(NULL));
    start=clock();
    while(count<=100000)
    {
        ranNum = rand() % 100 + 1;
        result += ranNum;
        count++;
    }
    timer = (clock() - start) / (double)CLOCKS_PER_SEC;
    cout << "Total: " << result << endl;
    cout << "Duraton: " << timer << " sec.";
}