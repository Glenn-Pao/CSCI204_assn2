#include "Coordinates.h"
#include <string>
#include <sstream>

using namespace std;

Coordinates::Coordinates()
{
	x = 0;
	y = 0;
}
Coordinates::Coordinates(int x, int y)
{
	SetX(x);
	SetY(y);
}
Coordinates::~Coordinates()
{
}
void Coordinates::SetX(int x)
{
	this->x = x;
}
int Coordinates::GetX()
{
	return x;
}
void Coordinates::SetY(int y)
{
	this->y = y;
}
int Coordinates::GetY()
{
	return y;
}
string Coordinates::ToString()
{
	string temp, strX, strY;

	//string stream the non-string variables
	stringstream coordXToS, coordYToS;
	
	//into their own respective variables, then convert them into string form
	coordXToS << x;
	coordYToS << y;
	
	strX = coordXToS.str();
	strY = coordYToS.str();
	
	temp = "(" + strX + ", " + strY + ")";

	return temp;
}

