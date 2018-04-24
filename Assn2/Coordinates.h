#include <string>
class Coordinates
{
private:
	int x;
	int y;
public:
	Coordinates();
	Coordinates(int x, int y);
	~Coordinates();
	
	//============ Get and Set Functions ============//
	void SetX(int x);
	int GetX();
	
	void SetY(int y);
	int GetY();
	//============ Get and Set Functions ============//

	std::string ToString();
};
