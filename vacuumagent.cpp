#include "vacuumagent.h"

VacuumAgent::VacuumAgent()
{
	env = Environment();
}

VacuumAgent::~VacuumAgent()
{

}

// scan environment object which contains a grid of room objects
// if Environment(Room.hasDirt()) == true, clean().
// if Environment(Room.hasDirt()) == false, moveright & repeat when in new room
// terminate when vacuum reaches original room
int VacuumAgent::sense(Environment *e)
{
	if (e->status == 1)
	{
		printf("Clean Finished.\n");
		return 1;
	}

	if (e->location == "A")
	{
		if (e->room1.hasDirt == 1)
		{
			clean(e, 1);
			return 0;
		}
		moveRight(e);
	}		
	else if (e->location == "B")
	{
		if (e->room2.hasDirt == 1)
		{
			clean(e, 2);
			return 0;
		}
		else
			moveLeft(e);
	}
}

// clean environment
void VacuumAgent::clean(Environment *e, int roomNumber)
{
	if (roomNumber == 1)
		e->room1.hasDirt = false;
	else
		e->room2.hasDirt = false;

	printf("Clean\n");

	if (!e->room1.hasDirt && !e->room2.hasDirt)
		e->status = true;
}

// move left
void VacuumAgent::moveLeft(Environment* e)
{
	printf("Goto Room A.\n");
	e->location = "A";

	if (!e->room1.hasDirt)		
		moveRight(e);
}

// move right
void VacuumAgent::moveRight(Environment* e)
{
	printf("Goto Room B.\n");
	e->location = "B";
	
	if (!e->room2.hasDirt)
		moveLeft(e);
}