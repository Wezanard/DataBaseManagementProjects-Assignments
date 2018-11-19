//deque Demo
#include <iostream>
#include <deque>
#include <queue>

using namespace std;

template<class T>
void printDeque(const deque& lst, string s) 
{
	cout << s << ": ";
	typename deque::const_iterator i = lst.begin(); 
	for ( ; i != lst.end(); i++)
		cout << *i << ' ';
	cout << endl;
}

int main() 
{
	deque<int> dq1;
	dq1.push_front(1); 
	dq1.push_front(2); 
	dq1.push_back(3); 
	dq1.push_back(4); 
	printDeque(dq1,"dq1");
	deque<int> dq2(dq1.begin()+1,dq1.end()-1); 
	dq1[1] = 5; 
	dq1.erase(dq1.begin()); 
	dq1.insert(dq1.end()-1,2,6);
	sort(dq1.begin(),dq1.end()); 
	deque<int> dq3;
	dq3.resize(dq1.size()+dq2.size()); 
	merge(dq1.begin(),dq1.end(),dq2.begin(),dq2.end(),dq3.begin()); 
	printDeque(dq1,"dq1");
	printDeque(dq2,"dq2"); 
	printDeque(dq3,"dq3"); 
	return 0;
}