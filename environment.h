#include <iostream>
#include "room.h"

using namespace std;

class Environment
{
public:	
	Environment();	
	~Environment();

	Room room1, room2;
	string location;
	bool status;
};