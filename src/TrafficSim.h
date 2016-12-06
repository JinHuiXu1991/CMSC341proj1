/*****************************************
** File:    TrafficSim.h
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the header of TrafficSim class for project 1.
** This program contains the headers of methods and member functions
** for TrafficSim class.
**
*****************************************/

#ifndef TRAFFICSIM_H
#define TRAFFICSIM_H

#include<queue>
#include<string>
#include"Vehicle.h"
#include"IntersectionFlowRate.h"
#include"Linked_List.h"

using namespace std;
class TrafficSim
{
	public:
		//implementation of constructors
		TrafficSim(string filename);
		TrafficSim();

		//-------------------------------------------------------
        // Name: DoRun
        // PreCondition:  none
        // PostCondition: start the traffic light simulation
        //---------------------------------------------------------
		void DoRun();

    private:
		//-------------------------------------------------------
        // Name: readFromFile
        // PreCondition:  file name is entered
        // PostCondition: read the file to gather flow rate
        //---------------------------------------------------------
		void readFromFile(string filename);

		//-------------------------------------------------------
        // Name: printBoard
        // PreCondition:  none
        // PostCondition: print the intersection for every simulation second
        //---------------------------------------------------------
		void printBoard(int time);

		//-------------------------------------------------------
        // Name: addVehicle
        // PreCondition:  none
        // PostCondition: add vehicle to specific queue depending on the direction
        //---------------------------------------------------------
		void addVehicle(char direction, Vehicle x);

		queue<Vehicle> * eastbound;   // east vehicle queue
		queue<Vehicle> * westbound;   // west vehicle queue
		queue<Vehicle> * northbound;  // north vehicle queue
		queue<Vehicle> * southbound;  // south vehicle queue
		IntersectionFlowRate flowRate; // vehicle flow rate
		Linked_List<ResultVehicle> * results; // results vehicle linked list
		string file; //file name
		
		
};

#endif