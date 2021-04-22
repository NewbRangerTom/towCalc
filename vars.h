#pragma once
char trailer = 'g';

// Truck input variable - 6
double tGVWR = 0.0;
double tGCWR = 0.0;
double tPayCap = 0.0;
double passWeight = 0.0;
double extCargo = 0.0;
double intCargo = 0.0;

// RV input variables - 5
double rvGVWR = 0.0;
double dryWeight = 0.0;
double tankWaterGal = 0.0;
double batWeight = 0.0; // use measured weight or estimate
double rvCargo = 0.0; // use measured weight or estimate
double waterWeight = tankWaterGal * 8.3; // in lbs
double percentTongue = 0.125;

// function pointers
double (*funcPntr)(double, double) = &hitchWeight; //function pointer for hitchWeight to use in totPayLoadWit
//to invoke hitchWeight() using funcPtr -- (*funcPntr)(rvGVWR,percentTongue)

double (*tplwPntr)(double, double, double, double) = &totPayLoadWit; //function pointer for totPayLoadWit to use in trkAvailPayload
//to invoke totPayLoadWit() using tplwPtr -- (*tplwcPntr)(passWeight, extCargo, intCargo, funcPntr)

double (*cwPtr)(double, double) = &trkCurbWeight; //function pointer for trkCurbWeight to use in combGVW
//to invoke trkCurbWeight() using cwPtr -- (*cwPtr)(tGVWR, tPayCap)

double (*rvGEWPtr)(double, double, double, double) = &rvGroEstWeight; //function pointer for rvGroEstWeight to use in combGVW
//to invoke rvGroEstWeight() using rvGEW -- (*rvGEWPtr)(dryWeight, waterWeight, batWeight, rvCargo)

double (*curbPtr)(double, double) = &combGVW; //function pointer to combGVW(double cwPtr, double rvGEWPtr) to use in therRemTowCap
//to invoke combGVW() using curbPtr -- (*curbPtr)(cwPtr, rvGEWPtr)