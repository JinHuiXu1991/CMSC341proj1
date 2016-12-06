/*****************************************
** File:    Vehicle.h
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the header of Vehicle class for project 1.
** This program contains the headers of methods and member functions
** for Vehicle class.
**
*****************************************/

#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;

class Vehicle
{
	public:
		//implementation of constructors
		Vehicle(char vehicleType, int time);
		Vehicle();

		//-------------------------------------------------------
        // Name: getType
        // PreCondition:  none
        // PostCondition: return the vehicle type
        //---------------------------------------------------------
		char getType() const;

		//-------------------------------------------------------
        // Name: getTimeEntered
        // PreCondition:  none
        // PostCondition: return the time vehicle enter the intersection
        //---------------------------------------------------------
		int getTimeEntered() const;

		//-------------------------------------------------------
        // Name: setType
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setType(char newType);

		//-------------------------------------------------------
        // Name: setTimeEntered
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setTimeEntered(int newTime);

	private:

		char type; //type of vehicle
		int timeEntered; //vehicle enter time.
};

#endif