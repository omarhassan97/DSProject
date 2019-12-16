#pragma once

#include "Event.h"


//class for the Promoted event
class PrompteEvent : public Event
{
		                
	double EXMoney;	//Total order money
public:
	PrompteEvent(int eTime, int oID,double Money);
	

	virtual void Execute(Restaurant* pRest);	//override execute function

};

