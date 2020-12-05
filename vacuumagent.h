#include "environment.h"

class VacuumAgent
{
public:
	VacuumAgent();
	~VacuumAgent();

	//member of functions:	sense, move, clean
	int sense(Environment *e);
	void clean(Environment *e, int roomNumber);
	void moveRight(Environment *e);
	void moveLeft(Environment *e);

	Environment env;
};