#pragma once

// function prototypes for towCalcFunc cpp

// 1 - Truck Gross Combined Weight Rating minus Truck Gross Vehicle Weight Rating
double towCap(double, double);

// 2 - Truck Gross Vehicle Weight Rating mius Truck Payload Capacity
double trkCurbWeight(double, double);

// 3 - Passenger Weight plus Exterior Cargo plus Interior Cargo
double totPayLoadNot(double, double, double);

// 4 - this is for 12.5% tongue weight, adjust as needed.
double hitchWeight(double, double);

// 5 - Dry Weight plus Water Weight plus Battery Weight + RV Cargo Weight
double rvGroEstWeight(double, double, double, double);

// 6 - Truck Gross Combined Weight Rating minus Combined Gross Vehicle Weight
double therRemTowCap(double, double);

// 7 - Truck Curb Weight plus RV Gross Estimated Weight
double combGVW(double, double);

// 8 -  RV Gross Vehicle Weight Rating minus RV Gross Estimated Weight
double rvAvGVWR(double, double);

// 9 - Passenger Weight + Ext Cargo + Int Cargo + Hitch Weight
double totPayLoadWit(double, double, double, double);

// 10 - Truck Payload Capacity minus Total Payload With Trailer (totPayLoadWit)
double trkAvailPayload(double, double);