/*****************************************
** File:    IntersectionFlowRate.h
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the header of IntersectionFlowRate class for project 1.
** This program contains the headers of methods and member functions
** for IntersectionFlowRate class.
**
*****************************************/

#ifndef INTERSECTIONFLOWRATE_H
#define INTERSECTIONFLOWRATE_H

using namespace std;
class IntersectionFlowRate
{
	public:
		//-------------------------------------------------------
        // Name: getEastFlowRateCars
        // PreCondition:  none
        // PostCondition: return car flow rate for east
        //---------------------------------------------------------
		int getEastFlowRateCars();

		//-------------------------------------------------------
        // Name: getWestFlowRateCars
        // PreCondition:  none
        // PostCondition: return car flow rate for west
        //---------------------------------------------------------
		int getWestFlowRateCars();

		//-------------------------------------------------------
        // Name: getNorthFlowRateCars
        // PreCondition:  none
        // PostCondition: return car flow rate for north
        //---------------------------------------------------------
		int getNorthFlowRateCars();

		//-------------------------------------------------------
        // Name: getSouthFlowRateCars
        // PreCondition:  none
        // PostCondition: return car flow rate for south
        //---------------------------------------------------------
		int getSouthFlowRateCars();

		//-------------------------------------------------------
        // Name: getEastFlowRateTrucks
        // PreCondition:  none
        // PostCondition: return truck flow rate for east
        //---------------------------------------------------------
		int getEastFlowRateTrucks();

		//-------------------------------------------------------
        // Name: getWestFlowRateTrucks
        // PreCondition:  none
        // PostCondition: return truck flow rate for west
        //---------------------------------------------------------
		int getWestFlowRateTrucks();

		//-------------------------------------------------------
        // Name: getNorthFlowRateTrucks
        // PreCondition:  none
        // PostCondition: return truck flow rate for north
        //---------------------------------------------------------
		int getNorthFlowRateTrucks();

		//-------------------------------------------------------
        // Name: getSouthFlowRateTrucks
        // PreCondition:  none
        // PostCondition: return truck flow rate for south
        //---------------------------------------------------------
		int getSouthFlowRateTrucks();

		//-------------------------------------------------------
        // Name: setEastFlowRateCars
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setEastFlowRateCars(int num);

		//-------------------------------------------------------
        // Name: setWestFlowRateCars
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setWestFlowRateCars(int num);

		//-------------------------------------------------------
        // Name: setSouthFlowRateCars
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setSouthFlowRateCars(int num);

		//-------------------------------------------------------
        // Name: setNorthFlowRateCars
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setNorthFlowRateCars(int num);

		//-------------------------------------------------------
        // Name: setEastFlowRateTrucks
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setEastFlowRateTrucks(int num);

		//-------------------------------------------------------
        // Name: setWestFlowRateTrucks
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setWestFlowRateTrucks(int num);

		//-------------------------------------------------------
        // Name: setSouthFlowRateTrucks
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setSouthFlowRateTrucks(int num);

		//-------------------------------------------------------
        // Name: setNorthFlowRateTrucks
        // PreCondition:  none
        // PostCondition: none
        //---------------------------------------------------------
		void setNorthFlowRateTrucks(int num);
		
	private:
		int eastFlowRateCars;    //car flow rate for east
		int	westFlowRateCars;    //car flow rate for west
		int	northFlowRateCars;   //car flow rate for north
		int	southFlowRateCars;	 //car flow rate for south
		int	eastFlowRateTrucks;  //truck flow rate for east
		int	westFlowRateTrucks;	 //truck flow rate for west
		int	northFlowRateTrucks; //truck flow rate for north
		int	southFlowRateTrucks; //truck flow rate for south
};
#endif
