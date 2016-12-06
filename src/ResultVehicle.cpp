/*****************************************
** File:    ResultVehicle.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the source code of ResultVehicle class for project 1.
** This program contains the implementations of methods and member functions
** for ResultVehicle class.
**
*****************************************/

#include "ResultVehicle.h"
using namespace std;

//initializer list
ResultVehicle::ResultVehicle(Vehicle x, int timeOut)
{
	type = x.getType();
	timeEntered = x.getTimeEntered();
	timeExit = timeOut;
}

ResultVehicle::ResultVehicle(){}

//getType
//return a vehicle type
char ResultVehicle::getType()
{
	return type;
}

//getTimeEntered
//return the time vehicle enter intersection
int ResultVehicle::getTimeEntered()
{
	return timeEntered;
}

//getTimeExit
//return the time vehicle exit intersection
int ResultVehicle::getTimeExit()
{
	return timeExit;
}