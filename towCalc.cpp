/*
Inspired by Ian @ BigRockMedia who made an excel spreadsheet calculator to calculate towing capacities.
*/

#include <iostream>
#include <windows.h>
#include <iomanip>
#include "towCalcFunc.h"
#include "vars.h"

int main()
{
	system("color 70");
	
	std::cout<<std::endl;
	std::cout << "Conceptual credit goes to Ian @ Big Rock Media - https://www.youtube.com/c/BigRockMedia/featured " << std::endl << std::endl;
	std::cout << "This calculator uses the following information: " << std::endl;
	std::cout << "  Variables for the RV: Dry Weight, GVWR,	Hitch Weight." << std::endl;
	std::cout << "    RV GVWR includes propane, full water tank weight (gallons * 8.3lbs; include fresh + heater)," << std::endl;
	std::cout << "    battery weight, and cargo (anything that didn't come with the trailer)" << std::endl;
	std::cout << "  Variables for the truck: Curb weight, GVWR,	GCWR (aka advertised towing capacity), and Payload Capacity." << std::endl;
	std::cout << "    Payload weight includes: weight of driver and all passengers, exterior cargo (anything in the turck bed), " << std::endl; 
	std::cout << "    and interior cargo (anything inside not human)." << std::endl << std::endl;

	std::cout << "Enter the following items:" << std::endl;
	std::cout << "Truck GVWR: ";
	std::cin >> tGVWR;
	std::cout << "Truck GCWR: ";
	std::cin >> tGCWR;
	std::cout << "Truck Payload Capacity: ";
	std::cin >> tPayCap;
	std::cout << std::endl;
	std::cout << "Your truck curb weight is: " << trkCurbWeight(tGVWR, tPayCap) << "lbs." << std::endl;
	std::cout << "Your truck towing capacity is: " << towCap(tGCWR, tGVWR) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "Driver and passenger(s) combined weight: ";
	std::cin >> passWeight;
	std::cout << "Weight of truck exterior cargo: ";
	std::cin >> extCargo;
	std::cout << "Weight of truck interior cargo: ";
	std::cin >> intCargo;
	std::cout << std::endl;
	std::cout << "Your total payload without trailer is: " << totPayLoadNot(passWeight, extCargo, intCargo) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "RV GVWR: ";
	std::cin >> rvGVWR;
	std::cout << "RV DRY weight (this includes propane): ";
	std::cin >> dryWeight;
	std::cout << std::endl;
	std::cout << "Your Hitch Weight is: " << hitchWeight(rvGVWR, percentTongue) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "Your total payload with trailer is: " << totPayLoadWit(passWeight, extCargo, intCargo, (*funcPntr)(rvGVWR, percentTongue)) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "Gallons of water in RV water tank and heater: ";
	std::cin >> tankWaterGal;
	std::cout << "RV battery weight: ";
	std::cin >> batWeight;
	std::cout << "Weight of RV interior cargo: ";
	std::cin >> rvCargo;
	std::cout << std::endl;
	std::cout << "The Gross Estimate Weight of the RV is: " << rvGroEstWeight(dryWeight, waterWeight, batWeight, rvCargo) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "Your RV has: " << rvAvGVWR(rvGVWR, ((*rvGEWPtr)(dryWeight, waterWeight, batWeight, rvCargo))) << "lbs. available for cargo." << std::endl;
	std::cout << std::endl;
	std::cout << "The theoretical remaining towing capacity of your truck is: " << therRemTowCap(tGCWR, (*curbPtr)((*cwPtr)(tGVWR, tPayCap), (*rvGEWPtr)(dryWeight, waterWeight, batWeight, rvCargo))) << "lbs." << std::endl;
	std::cout << std::endl;
	std::cout << "The combined wieght of the Truck and RV is: " << combGVW((*cwPtr)(tGVWR, tPayCap), (*rvGEWPtr)(dryWeight, waterWeight, batWeight, rvCargo)) << "lbs." << std::endl;
	std::cout << std::endl;
	if (trkAvailPayload(tPayCap, (*tplwPntr)(passWeight, extCargo, intCargo, (*funcPntr)(rvGVWR, percentTongue))) > 0) {
		std::cout << "Your remaining available payload with trailer is: " << trkAvailPayload(tPayCap, (*tplwPntr)(passWeight, extCargo, intCargo, (*funcPntr)(rvGVWR, percentTongue))) << "lbs." << std::endl;
	}
	else {
		std::cout << "Your trailer is overloaded by: " << trkAvailPayload(tPayCap, (*tplwPntr)(passWeight, extCargo, intCargo, (*funcPntr)(rvGVWR, percentTongue))) << "lbs." << std::endl;
	};
	std::cout << std::endl;
	std::cout << "The theoretical remaining towing capacity of your truck is: " << therRemTowCap(tGCWR, (*curbPtr)((*cwPtr)(tGVWR, tPayCap), (*rvGEWPtr)(dryWeight, waterWeight, batWeight, rvCargo))) << "lbs." << std::endl;
	std::cout << std::endl;
	
	std::cin.get();
	
	return 0;
}

//NewbRangerTom_2104_v1.2