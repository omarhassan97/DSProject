#include "ArrivalEvent.h"
#include "..\Rest\Restaurant.h"
#include "../Rest/Order.h"

ArrivalEvent::ArrivalEvent(int eTime, int oID, ORD_TYPE oType):Event(eTime, oID)
{
	OrdType = oType;
}

void ArrivalEvent::Execute(Restaurant* pRest)
{
	//This function should create an order and fills its data 
	// Then adds it to normal, vegan, or VIP order lists that you will create in phase1
	if (OrdType == TYPE_NRM)
	{
		Order newOrder(this->OrderID, this -> OrdType);
		pRest->NormalOrders.enqueue(newOrder);
	}
	else if (OrdType == TYPE_VEG)
	{
		Order newOrder(this->OrderID, this->OrdType);
		pRest->VeganOrders.enqueue(newOrder);
	}
	else if (OrdType == TYPE_VIP)//TO be edited
	{
		Order newOrder(this->OrderID, this->OrdType);
		pRest->VeganOrders.enqueue(newOrder);
	}
		

}
