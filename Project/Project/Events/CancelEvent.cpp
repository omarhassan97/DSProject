#include "CancelEvent.h"
#include "..\Rest\Restaurant.h"


CancelEvent::CancelEvent(int eTime, int oID):Event(eTime, oID)
{
	
}

void CancelEvent::Execute(Restaurant* pRest)
{
	//should cancel the requested order if found
	//Search with the order ID -> delete

}
