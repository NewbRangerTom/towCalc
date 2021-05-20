#pragma once
#include "towCalcFunc.h"

//1
double towCap(double tGCWR, double tGVWR) {  // Truck Gross Combined Weight Rating minus Truck Gross Vehicle Weight Rating
	double towCap = tGCWR - tGVWR;
	return towCap;
}
//2
double trkCurbWeight(double tGVWR, double tPayCap) { // Truck Gross Vehicle Weight Rating mius Truck Payload Capacity
	double trkCurbWeight = tGVWR - tPayCap;
	return trkCurbWeight;
}
//3
double totPayLoadNot(double passWeight, double extCargo, double intCargo) { // Passenger Weight plus Exterior Cargo plus Interior Cargo
	double totPayLoadNot = passWeight + extCargo + intCargo;
	return totPayLoadNot;
}
//4
double hitchWeight(double rvGVWR, double percentTongue) { // this is for 12.5% tongue weight, adjust as needed.
	double hitchWeight = rvGVWR * percentTongue; 
	return hitchWeight;
}
//5
double rvGroEstWeight(double dryWeight, double waterWeight, double batWeight, double rvCargo) { // Dry Weight plus Water Weight plus Battery Weight + RV Cargo Weight
	double rvGroEstWeight = dryWeight + waterWeight + batWeight + rvCargo;
	return rvGroEstWeight;
}
//6
double therRemTowCap(double tGCWR, double curbPtr) { // Truck Gross Combined Weight Rating minus Combined Gross Vehicle Weight
	double therRemTowCap = tGCWR - curbPtr;
	return therRemTowCap;
}
//7
double combGVW(double cwPtr, double rvGEWPtr) { // Truck Curb Weight plus RV Gross Estimated Weight
	double combGVW = cwPtr + rvGEWPtr;
	return combGVW;
}
//8
double rvAvGVWR(double rvGVWR, double rvGEWPtr) { // RV Gross Vehicle Weight Rating minus RV Gross Estimated Weight
	double rvAvGVWR = rvGVWR - rvGEWPtr;
	return rvAvGVWR;
}
//9
double totPayLoadWit(double passWeight, double extCargo, double intCargo, double funcPntr) { // Passenger Weight + Ext Cargo + Int Cargo + Hitch Weight
	double totPayLoadWit = passWeight + extCargo + intCargo + funcPntr;
	return totPayLoadWit;
}
//10
double trkAvailPayload(double tPayCap, double tplwPntr) { // Truck Payload Capacity minus Total Payload With Trailer (totPayLoadWit)
	double trkAvailPayLoad = tPayCap - tplwPntr;
	return trkAvailPayLoad;
}