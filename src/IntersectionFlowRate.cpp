/*****************************************
** File:    IntersectionFlowRate.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the source code of IntersectionFlowRate class for project 1.
** This program contains the implementations of methods and member functions
** for IntersectionFlowRate class.
**
*****************************************/

#include "IntersectionFlowRate.h"

using namespace std;

//getEastFlowRateCars
//return car flow rate for east
int IntersectionFlowRate::getEastFlowRateCars()
{
	return eastFlowRateCars;
}

//getWestFlowRateCars
//return car flow rate for West
int IntersectionFlowRate::getWestFlowRateCars()
{
	return westFlowRateCars; 
}

//getNorthFlowRateCars
//return car flow rate for North
int IntersectionFlowRate::getNorthFlowRateCars()
{
	return northFlowRateCars; 
}

//getSouthFlowRateCars
//return car flow rate for South
int IntersectionFlowRate::getSouthFlowRateCars()
{
	return southFlowRateCars; 
}

//getEastFlowRateTrucks
//return truck flow rate for south
int IntersectionFlowRate::getEastFlowRateTrucks()
{
	return eastFlowRateTrucks;
}

//getWestFlowRateTrucks
//return truck flow rate for West
int IntersectionFlowRate::getWestFlowRateTrucks()
{
	return westFlowRateTrucks; 
}

//getNorthFlowRateTrucks
//return truck flow rate for North
int IntersectionFlowRate::getNorthFlowRateTrucks()
{
	return northFlowRateTrucks; 
}

//getSouthFlowRateTrucks
//return truck flow rate for South
int IntersectionFlowRate::getSouthFlowRateTrucks()
{
	return southFlowRateTrucks; 
}

//setEastFlowRateCars
//set the result of 60 second devide by given number to car flow rate for east
void IntersectionFlowRate::setEastFlowRateCars(int num)
{
	eastFlowRateCars = 60 / num ;
}

//setWestFlowRateCars
//set the result of 60 second devide by given number to car flow rate for West
void  IntersectionFlowRate::setWestFlowRateCars(int num)
{
	westFlowRateCars = 60 / num;
}

//setNorthFlowRateCars
//set the result of 60 second devide by given number to car flow rate for North
void  IntersectionFlowRate::setNorthFlowRateCars(int num)
{
	northFlowRateCars = 60 / num;
}

//setSouthFlowRateCars
//set the result of 60 second devide by given number to car flow rate for South
void  IntersectionFlowRate::setSouthFlowRateCars(int num)
{
	southFlowRateCars = 60 / num;
}

//setEastFlowRateCars
//set the result of 60 second devide by given number to truck flow rate for East
void IntersectionFlowRate::setEastFlowRateTrucks(int num)
{
	eastFlowRateTrucks = 60 / num;
}

//setWestFlowRateCars
//set the result of 60 second devide by given number to truck flow rate for West
void  IntersectionFlowRate::setWestFlowRateTrucks(int num)
{
	westFlowRateTrucks = 60 / num;
}

//setNorthFlowRateCars
//set the result of 60 second devide by given number to truck flow rate for North
void  IntersectionFlowRate::setNorthFlowRateTrucks(int num)
{
	northFlowRateTrucks = 60 / num;
}

//setSouthFlowRateCars
//set the result of 60 second devide by given number to truck flow rate for South
void  IntersectionFlowRate::setSouthFlowRateTrucks(int num)
{
	southFlowRateTrucks = 60 / num;
}