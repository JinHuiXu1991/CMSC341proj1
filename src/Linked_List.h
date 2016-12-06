/*****************************************
** File:    Linked_List.h
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the header of Linked_List class for project 1.
** This program contains the headers of methods and member functions
** for Linked_List class.
**
*****************************************/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include"ResultVehicle.h"

using namespace std;

//define a NODE structure which contain ResultVehicle.
struct NODE
{
	ResultVehicle v;
	NODE * link; 
};

template <class T>
class Linked_List
{

	public:
		//implementation of constructors
		Linked_List();

		//-------------------------------------------------------
        // Name: insert
        // PreCondition:  none
        // PostCondition: insert a new node into linked list
        //---------------------------------------------------------
		void insert(ResultVehicle x);

		//-------------------------------------------------------
        // Name: isEmpty
        // PreCondition:  none
        // PostCondition: check if the linked list is empty
        //---------------------------------------------------------
		bool isEmpty();

		//-------------------------------------------------------
        // Name: print_list
        // PreCondition:  none
        // PostCondition: print every node in linked list
        //---------------------------------------------------------
		void print_list();

		//-------------------------------------------------------
        // Name: size
        // PreCondition:  none
        // PostCondition: return the size of linked list
        //---------------------------------------------------------
		int size();

		//-------------------------------------------------------
        // Name: carNum
        // PreCondition:  none
        // PostCondition: return the number of car inside linked list
        //---------------------------------------------------------
		int carNum();

		//-------------------------------------------------------
        // Name: truckNum
        // PreCondition:  none
        // PostCondition: return the number of truck inside linked list
        //---------------------------------------------------------
		int truckNum();

		//-------------------------------------------------------
        // Name: waitTime
        // PreCondition:  none
        // PostCondition: return total wait time in intersection for all vehicles
        //---------------------------------------------------------
		double totalWaitTime();


	private:
		NODE * INSERT;
		NODE * FRONT_ptr;
		NODE * REAR_ptr;
		NODE * CURSOR;
};

#include "Linked_List.cpp"
#endif