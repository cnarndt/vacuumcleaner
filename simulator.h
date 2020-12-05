#include "vacuumagent.h"

class Simulator
{
public:
	Simulator();
	~Simulator();

	void run();
	VacuumAgent agent;
	Environment environment;
};