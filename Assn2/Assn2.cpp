#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	string name;
	Square testSquare;
	Coordinates *theCoordinates;
	cout << "Test running" << endl;
	cout << "Enter Name: ";
	cin >> name;

	theCoordinates = new Coordinates[4];
	while(i < 4)
	{	
		int x, y;
		cout << "Enter coordinate X: ";
		cin >> x;

		cout << "Enter coordinate Y: ";
		cin >> y;

		//record into array of coordinates
		theCoordinates[i] = Coordinates(x, y);
		i++;
	}
	
	testSquare = Square(name, false, theCoordinates);
	cout << testSquare.ToString();
	
	if(theCoordinates)
	{
		delete theCoordinates;
	}
	
	return 0;
}
