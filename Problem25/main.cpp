#include <iostream>
#include <list>
#include <algorithm>
#include <deque>
#include <functional>
#include <string>

using namespace std;

template<class T>
void printList(const list<T>&lst, string s) 
{
	cout<< s <<":  " << endl;
	for (typename list<T>::const_iterator i = lst.begin(); i != lst.end(); i++)
	{
		cout<< *i <<' '<< endl;
	}
}

int main() 
{
	list<int> lst1;                         
	printList(lst1,"lst1");//Goes through and prints the intergers in the list passed to the prinList method.
	list<int> lst2(3, 7);//Adds 3 7's to the list
	printList(lst2,"lst2");     
	for (int j = 1; j <= 5; j++)
	{
		lst1.push_back(j);
	}
	list<int>::iterator i1 = lst1.begin(), i2 = i1, i3; //creates and starts 3 itterators at the begining of list 1.
	i2++; i2++; i2++;//increments itterator i2 3 times
	list<int> lst3(i1++,i2);//sets the list between the 2 and 3 slot
	printList(lst3,"lst3");     
	list<int> lst4(lst1);//sets list 4 to contain the contents of list1
	printList(lst4,"lst4");     
	i1 = lst4.begin();//sets i1 itterator to the begining of list4
	lst4.splice(++i1,lst2); //splices lst2's contents into list4 where iterator 1 is     
	printList(lst2,"lst2");     
	printList(lst4,"lst4");     
	lst2 = lst1;//sets list 2 equal to list 1
	printList(lst2,"lst2");
	i2 = lst2.begin();//sets itterator i2 to the begiing of list2
	lst4.splice(i1,lst2,++i2);//splices the element pointed to by i2 from list2 into list 1 where i1 points    
	printList(lst2,"lst2");     
	printList(lst4,"lst4");     
	i2 = lst2.begin();//sets i2 to begining of list2
	i3 = i2;//sets i3 to beginign of list2
	lst4.splice(i1,lst2,i2,++i3); //splices the elements from list 2 between iterator i2 and i3 into list4 where i1 points
	printList(lst2,"lst2");     
	printList(lst4,"lst4");     
	lst4.remove(1);         //removes the first element
	printList(lst4,"lst4");     
	lst4.sort();                            //sorts the list numeracly
	printList(lst4,"lst4");     
	lst4.unique();                          //condesns the list to just unique numbers
	printList(lst4,"lst4");     
	lst1.merge(lst2);                        //merges the two lists into list1
	printList(lst1,"lst1");     
	printList(lst2,"lst2");     
	lst3.reverse();                         //reverses the ordering of the list
	printList(lst3,"lst3");          
	lst4.reverse();////reverses the ordering of the list
	printList(lst4,"lst4");     
	lst3.merge(lst4,greater<int>());  
	printList(lst3,"lst3");     
	printList(lst4,"lst4");     
	lst3.remove_if(bind2nd(not_equal_to<int>(),3));//removes all intergers that do not equal 3
	printList(lst3,"lst3");     
	lst3.unique(not_equal_to<int>());//removes all intergers not equal to each other
	printList(lst3,"lst3");     
	return 0;
}

