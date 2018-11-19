#include <iostream>
#include <vector>
#include <ctime>
 
using namespace std;
typedef unsigned long long bigint;

class josephus
{
public:
    bigint findSurvivors( bigint n, bigint k, bigint s = 0 )//goes through the vector determing who is saved based on variables inputed by the user.
    {
        bigint i = 1;
        for( bigint x = i; x <= n; x++, i++ )
            s = ( s + k ) % i;
 
        return s;
    }
 
    void getExecutionList( bigint n, bigint k, bigint s = 1 )//prints the prisoners that were executed
    {
        cout << endl << endl << "Execution list: " << endl;
 
        prisoners.clear();//clears up the prisoner vector
        
        for( bigint x = 0; x < n; x++ )
        
            prisoners.push_back( x );//fills the vector with prisoners
 
        bigint index = 1;
        while( prisoners.size() > s )//goes through and selectes the "kill" prisoners
        {
            index += k - 1;
            if( index >= prisoners.size() ) index %= prisoners.size();
            
            cout << prisoners[static_cast<unsigned int>( index )] << ", "; // prints the killed prisoner
 
            vector<bigint>::iterator it = prisoners.begin() + static_cast<unsigned int>( index );//sets an iterator to the prisoner to be killed.
            prisoners.erase( it );//removes the killed prisoner from the vector
        }
    }
 
private:
    vector<bigint> prisoners;
};

int main( int argc, char* argv[] )
{
	while(true)
	{
		josephus jo;
		bigint n, k;
		system( "cls" );
		cout << "Number of Prisoners( 0 to QUIT ): "; cin >> n;//sets the number of prisoners being executed.
		if( !n ) return 0;
		cout << "Execution step: "; cin >> k;//sets the amount of steps when selecting executonee.
 
		
		clock_t begin = clock();
		jo.getExecutionList( n, k );//kills the prisoners
		cout << endl << "Survivor:";
		cout <<  jo.findSurvivors( n, k ) << " " << endl;//prints the survivor(s) who go home.
		clock_t end = clock();
		double elasped_secs = double(end - begin) / CLOCKS_PER_SEC;
		cout << "Code ran for: " << elasped_secs << " seconds." << endl;
		system("pause");
	}
    return 0;
}

//a lot of research was done on geeksforgeeks.org
//the concepts used in this code were pulled from geeksforgeeks.org