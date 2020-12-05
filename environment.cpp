#include "environment.h"

Environment::Environment()
{
	room1 = Room();
	room1.hasDirt = true;
	
	room2 = Room();
	room2.hasDirt = true;
	
	location = "A";
	status = false;
}

Environment::~Environment()
{

}
