#include "Coordinates.h"
#include "ShapeTwoD.h"

using namespace std;
///summary
///
/// The child class of ShapeTwoD
/// Contains specifics related to the shape square
///
///end summary

class Square : public ShapeTwoD
{
private:
	double area;
	Coordinates* theCoords;
public:
	Square();
	Square(string name, bool isWarpSpace, Coordinates* newCoords);	//overloaded constructor
	~Square();

	string ToString();
};
