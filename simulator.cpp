#include <iostream>
#include "simulator.h"
#include <windows.h>

using namespace std;

Simulator::Simulator()
{
	agent = VacuumAgent();
	environment = Environment();
}

Simulator::~Simulator()
{

}

void Simulator::run()
{
	printf("Goto Room A\n");
	while (1)
	{
		if (agent.sense(&environment) == 1)
			break;
		Sleep(1000);
	}
}