#include <iostream>
#include <math.h>
using namespace std;
float area = 0;
float length1 = 0;
void triangle()
{
    cout << "Equilateral Triangle!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = sqrt(.75)*(length1*length1);
    cout << "The Area is ... " << area << endl;
}
void square()
{
    cout <<"Square!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = length1*length1;
    cout << "The Area is ... " << area << endl;
}
void pentagon()
{
    cout << "Pentagon!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = (.25)*sqrt(5*(5+2*sqrt(5)))*(length1*length1);
    cout << "The Area is ... " << area << endl;
}
void hexagon()
{
    cout << "Hexagon!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = ((3*sqrt(3))/2)*(length1*length1);
    cout << "The Area is ... " << area << endl;
}
void heptagon()
{
    cout << "Heptagon!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = (1.75)*(length1*length1)*(2.08);
    cout << "The Area is ... " << area << endl;
}
void octagon()
{
    cout << "Octagon!" << endl;
    cout << "Input Length of One Side." <<endl;
    cin >> length1;
    area = 2*(1+sqrt(2))*(length1*length1);
    cout << "The Area is ... " << area << endl;
}
int main()
{
    int choice = 0;
    cout << "Calculate what?" << endl;
    cout << "3. Equilateral Triangle" << endl;
    cout << "4. Square" << endl;
    cout << "5. Pentagon" << endl;
    cout << "6. Hexagon" << endl;
    cout << "7. Heptagon" << endl;
    cout << "8. Octagon" << endl;
    cout << "Input Option Number" << endl;
    cin >> choice;
    if(choice==3)
    {
        triangle();
    }
    else if(choice==4)
    {
        square();
    }
    else if(choice==5)
    {
        pentagon();
    }
    else if(choice==6)
    {
        hexagon();
    }
    else if(choice==7)
    {
        heptagon();
    }
    else if(choice==8)
    {
        octagon();
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}