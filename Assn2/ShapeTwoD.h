#include <cmath>
#include <string>
using namespace std;

///summary
///
/// The class that is going to be the parent of Cross, Square and Rectangle
/// It holds the common functions that the child classes will share
///
///end summary


class ShapeTwoD
{
private:
	//========= Minimum Requirement Variables =========//
	string name;
	bool containsWarpSpace;
	//========= Minimum Requirement Variables =========//
public:
	//========= Constructor and Destructor ==========//
	ShapeTwoD();					//default constructor
	ShapeTwoD(string name, bool containsWarpSpace);	//overloaded constructor
	~ShapeTwoD();
	//========= Constructor and Destructor ==========//

	//============ Get and Set Functions ============//
	void SetName(string name);
	string GetName();

	void SetWarpSpaceStatus(bool containsWarpSpace);
	bool GetWarpSpaceStatus();
	//============ Get and Set Functions ============//

	//============ Abstract Functions ============//
	//virtual double ComputeArea() = 0;		//this is likely an abstract function
	//virtual bool isPointInShape(int x, int y) = 0;	//check if point is inside the shape
	//virtual bool isPointOnShape(int x, int y) = 0;	//check if point is on the outline of shape
	virtual string ToString() = 0;
	//============ Abstract Functions ============//
};
