#include<iostream>
#include<vector>
#include<string>
usingnamespacestd;

int main()
{
  vector<int>intVector;


for (inti = 0; i< 10; i++)
intVector.push_back(i + 1);

cout<<"Numbers in the vector: ";
for (inti = 0; i<intVector.size(); i++)
cout<<intVector[i] <<" ";

  vector<string>stringVector;

stringVector.push_back("Dallas");
stringVector.push_back("Houston");
stringVector.push_back("Austin");
stringVector.push_back("Norman");

cout<<"\nStrings in the string vector: ";
for (inti = 0; i<stringVector.size(); i++)
cout<<stringVector[i] <<" ";

stringVector.pop_back();

  vector<string> v2;
  v2.swap(stringVector);
  v2[0] = "Atlanta";

cout<<"\nStrings in the vector v2: ";
for (inti = 0; i< v2.size(); i++)
cout<< v2.at(i) <<" ";

return 0;
}
