#pragma once

#include "..\Defs.h"
#include "..\GUI\GUI.h"
#include "..\Generic_DS\Queue.h"
#include "..\Events\Event.h"
#include "NormalOrders.h"
#include "VeganOrders.h"
#include "Cook.h"
// it is the maestro of the project
class Restaurant  
{	
private:
	GUI *pGUI;
	Queue<Event*> EventsQueue;	//Queue of all events that will be loaded from file
	
	
	//
	// TODO: Add More Data Members As Needed
	//


public:
	
	Restaurant();
	~Restaurant();
	NormalOrders NormalOrders; //Added: Queue of all normal orders
	VeganOrders VeganOrders;

	//cooks Queues
	Queue<Cook*> NormalCook; //WHY NOT Queue<Cook> NoramlCook; not Cook poiners?
	Queue<Cook*> VeganCook;
	Queue<Cook*> VIPCook;

	void InputReading(Restaurant* pRst); //function that read the input file

	void ExecuteEvents(int TimeStep);	//executes all events at current timestep
	void RunSimulation();

	void FillDrawingList();

	//
	// TODO: Add More Member Functions As Needed
	//

};
