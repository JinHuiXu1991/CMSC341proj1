/*****************************************
** File:    ResultVehicle.h
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the header of ResultVehicle class for project 1.
** This program contains the headers of methods and member functions
** for ResultVehicle class.
**
*****************************************/

#ifndef RESULTVEHICLE_H
#define RESULTVEHICLE_H
#include"Vehicle.h"

using namespace std;

class ResultVehicle
{
	public:
		//implementation of constructors
		ResultVehicle(Vehicle x, int timeExit);
		ResultVehicle();

		//-------------------------------------------------------
        // Name: getType
        // PreCondition:  none
        // PostCondition: return the vehicle type
        //---------------------------------------------------------
		char getType();

		//-------------------------------------------------------
        // Name: getTimeEntered
        // PreCondition:  none
        // PostCondition: return the time vehicle enter the intersection
        //---------------------------------------------------------
		int getTimeEntered();

		//-------------------------------------------------------
        // Name: getTimeExit
        // PreCondition:  none
        // PostCondition: return the time vehicle exit the intersection
        //---------------------------------------------------------
		int getTimeExit();

	private:
		char type; //type of vehicle
		int timeEntered; //vehicle enter time.
		int timeExit; //vehicle exit time.
};

#endif