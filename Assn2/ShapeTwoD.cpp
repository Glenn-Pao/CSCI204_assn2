#include "ShapeTwoD.h"

///summary
///
/// Methods defined in ShapeTwoD.h will be further elaborated here
///
///end summary

//default constructor
ShapeTwoD::ShapeTwoD()
{
	//set name to empty string
	SetName("");
	
	//set warp status to false. aka this shape is a normal shape
	SetWarpSpaceStatus(false);	
}
ShapeTwoD::ShapeTwoD(string name, bool containsWarpSpace)
{
	//set name to empty string
	SetName(name);
	
	//set warp status to false. aka this shape is a normal shape
	SetWarpSpaceStatus(containsWarpSpace);	
}
//destructor
ShapeTwoD::~ShapeTwoD()
{
}

void ShapeTwoD::SetName(string name)
{
	this->name = name;
}

string ShapeTwoD::GetName()
{
	return name;
}

void ShapeTwoD::SetWarpSpaceStatus(bool containsWarpSpace)
{
	this->containsWarpSpace = containsWarpSpace;
}
bool ShapeTwoD::GetWarpSpaceStatus()
{
	return containsWarpSpace;
}
string ShapeTwoD::ToString()
{
	string temp, nameDisplay, warpSpaceState;
	
	//set up shape name
	nameDisplay = "Shape Name: " + name + '\n';
	
	//check the warp state and change the bool to a yes or no statement string
	if(containsWarpSpace)
	{
		warpSpaceState = "Warp Space: Yes" + '\n';
	}
	else
	{
		warpSpaceState = "Warp Space: No" + '\n';
	}
	
	//assemble them together
	temp = nameDisplay + warpSpaceState;

	return temp;
}
