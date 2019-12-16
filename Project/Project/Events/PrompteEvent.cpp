#include "PrompteEvent.h"
#include "..\Rest\Restaurant.h"


PrompteEvent::PrompteEvent(int eTime, int oID, double Money) :Event(eTime, oID)
{
	EXMoney = Money;
}

void PrompteEvent::Execute(Restaurant* pRest)
{
	//should move a normal order to the VIP list and update order's data

}
