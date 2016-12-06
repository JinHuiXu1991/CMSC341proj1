/*****************************************
** File:    Vehicle.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the source code of Vehicle class for project 1.
** This program contains the implementations of methods and member functions
** for Vehicle class.
**
*****************************************/

#include "Vehicle.h"

using namespace std;

//initializer list
Vehicle::Vehicle(char vehicleType, int time)
{
	type = vehicleType;
	timeEntered = time;
}
Vehicle::Vehicle(){}

//getType
//return a vehicle type
char Vehicle::getType()  const 
{
	return type;
}

//getTimeEntered
//return the time vehicle enter intersection
int Vehicle::getTimeEntered()  const 
{
	return timeEntered;
}

//setType
//Given character, set it to vehicle type
void Vehicle::setType(char newType)
{
	type = newType;
}

//setTimeEntered
//Given number, set it to the time of vehicle enter intersection
void Vehicle::setTimeEntered(int newTime)
{
	timeEntered = newTime;
}
