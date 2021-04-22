#include "towCalcFunc.h"
//1
double towCap(double tGCWR, double tGVWR) {
	double towCap = tGCWR - tGVWR;
	return towCap;
}
//2
double trkCurbWeight(double tGVWR, double tPayCap) {
	double trkCurbWeight = tGVWR - tPayCap;
	return trkCurbWeight;
}
//3
double hitchWeight(double rvGVWR, double percentTongue) {
	double hitchWeight = rvGVWR * percentTongue; // this is for 12.5% tongue weight, adjust as needed.
	return hitchWeight;
}
//4
double totPayLoadNot(double passWeight, double extCargo, double intCargo) {
	double totPayLoadNot = passWeight + extCargo + intCargo;
	return totPayLoadNot;
}
//5
double totPayLoadWit(double passWeight, double extCargo, double intCargo, double funcPntr) {
	double totPayLoadWit = passWeight + extCargo + intCargo + funcPntr;
	return totPayLoadWit;
}
//6
double trkAvailPayload(double tPayCap, double tplwPntr) {
	double trkAvailPayLoad = tPayCap - tplwPntr;
	return trkAvailPayLoad;
}
//7
double rvGroEstWeight(double dryWeight, double waterWeight, double batWeight, double rvCargo) {
	double rvGroEstWeight = dryWeight + waterWeight + batWeight + rvCargo;
	return rvGroEstWeight;
}
//8
double combGVW(double cwPtr, double rvGEWPtr) {
	double combGVW = cwPtr + rvGEWPtr;
	return combGVW;
}
//9
double therRemTowCap(double tGCWR, double curbPtr) {
	double therRemTowCap = tGCWR - curbPtr;
	return therRemTowCap;
}
//10
double rvAvGVWR(double rvGVWR, double rvGEWPtr) {
	double rvAvGVWR = rvGVWR - rvGEWPtr;
	return rvAvGVWR;
}