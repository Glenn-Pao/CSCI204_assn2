#include "Square.h"
#include <iostream>
using namespace std;

Square::Square()
	:ShapeTwoD()
{
	cout << "test working " << endl;
	area = 0;
	theCoords = new Coordinates[4];
}

Square::Square(string name, bool isWarpSpace, Coordinates* newCoords)
	: ShapeTwoD(name, isWarpSpace)
{
	cout << "test working 2 " << endl;
	theCoords = new Coordinates[4];
	
	for (int i = 0; i < 4; ++i)
	{
		cout << newCoords[i].GetX() << endl;		
		theCoords[i] = newCoords[i];
	}
	cout << "out " << endl;
}

Square::~Square()
{
	if(theCoords)
	{
		delete theCoords;
	}
}

string Square::ToString()
{
	string temp, temp2, temp3;

	cout << "To string " << endl;
	temp2 = ShapeTwoD::ToString();
	for(int i = 0; i < 4; i++)
	{
		temp3 += "Point "+ theCoords[i].ToString() + '\n';
	}

	temp = temp2 + temp3;
	return temp;
}
