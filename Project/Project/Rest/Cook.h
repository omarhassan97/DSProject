#pragma once

#include "..\Defs.h"

#pragma once
class Cook
{
	//static int LastID;
	int ID;//= LastID++;
	ORD_TYPE type;	//for each order type there is a corresponding type (VIP, Normal, Vegan)
	int speed;		//dishes it can prepare in one clock tick (in one timestep)
	bool IsFree = 1; //New -> is the cook free or not
	int NOrderBeforRest; //New;
	int NDoneOrders = 0; //New;

public:
	Cook();
	virtual ~Cook();
	int GetID() const;
	ORD_TYPE GetType() const;
	void setID(int);
	void setType(ORD_TYPE) ;
	//New -> IsFree
	void SetIsFree(bool);
	bool GetIsFree();
	void SetNDoneOrders(); //increase by one
	int GetNDoneOrders();

};
