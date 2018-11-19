//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	const int NUMBER_OF_CARDS = 52;
//	vector<int>deck;
//	string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
//	string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
//
//	// Initialize cards
//	for (int i = 0; i< NUMBER_OF_CARDS; i++)
//	deck.push_back(i);
//
//	// Shuffle the cards
//	srand(time(0));
//	for (int i = 0; i< NUMBER_OF_CARDS; i++)
//	{
//		// Generate an index randomly
//		int index = rand() % NUMBER_OF_CARDS;
//		int temp = deck[i];
//		deck[i] = deck[index];
//		deck[index] = temp;
//	}
//
//	// Display the first four cards
//	for (int i = 0; i< 4; i++)
//	{
//		string suit = suits[deck[i] / 13];
//		string rank = ranks[deck[i] % 13];
//		cout<< "Card number "<< deck[i] << ": " << rank <<" of "<< suit <<endl;
//	}
//
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
const int COLUMN_SIZE = 4;
const int ROW_SIZE = 3;
vector< vector<int> > m(ROW_SIZE, vector<int>(COLUMN_SIZE));
int sum(int rowSize)
{
	int total = 0;
	for (int row = 0; row < rowSize; row++)
	{
		for (int column = 0; column < COLUMN_SIZE; column++)
		{
			total += m[row][column];
		}
	}

	return total;
}

int main()
{
	cout<<"Enter "<< ROW_SIZE <<" rows and " << COLUMN_SIZE <<" columns: "<<endl;
	for (int i = 0; i< ROW_SIZE; i++)
	{
		vector<int> row;
		for (int j = 0; j < COLUMN_SIZE; j++)
		{
			row.push_back(i*j);
			cin >> m [i][j];
		}
		m.push_back(row);
	}
	cout<< "\nSum of all elements is " << sum(ROW_SIZE) <<endl;
	return 0;
}