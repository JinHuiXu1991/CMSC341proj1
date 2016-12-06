/*****************************************
** File:    Linked_List.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the source code of Linked_List class for project 1.
** This program contains the implementations of methods and member functions
** for Linked_List class.
**
*****************************************/

#ifndef Linked_List_CPP
#define Linked_List_CPP

#include<iostream>
#include "Linked_List.h"
using namespace std;


//initializer list
template <class T>
Linked_List<T>::Linked_List()
{
	FRONT_ptr = NULL;
	REAR_ptr = NULL;
}

//insert
//insert a new node into linked list
template <class T>
void Linked_List<T>::insert(ResultVehicle x)
{
	INSERT = new NODE();

	INSERT->v = x;

	//check if the linked list is empty
	if(isEmpty() == true) 
	{
		INSERT->link = NULL;
		FRONT_ptr = INSERT;
		REAR_ptr = INSERT;
	}
	else 
	{
		REAR_ptr->link = INSERT;
		INSERT->link = NULL;
		REAR_ptr = INSERT;
	}
}

//print_list
//print every node in linked list
template <class T>
void Linked_List<T>::print_list()
{
	if(isEmpty() == true)
	{
		cout << "No nodes to display" << endl;
		return;
	}

	cout << "This list has: " << endl;

	for(CURSOR = FRONT_ptr; CURSOR != NULL; CURSOR = CURSOR->link)
	{
	  cout << CURSOR->v.getType() << CURSOR->v.getTimeEntered() << CURSOR->v.getTimeExit() <<  endl;
	}
}

//isEmpty
//check if the link list is empty
template <class T>
bool Linked_List<T>::isEmpty()
{
	if(FRONT_ptr == NULL)
		return true;
	else
		return false;
}


//size
//return the size of linked list
template <class T>
int Linked_List<T>::size()
{
	int count = 0;
	if(isEmpty() == true)
	{
		return 0;
	}

	for(CURSOR = FRONT_ptr; CURSOR != NULL; CURSOR = CURSOR->link)
	{
		count++;
	}
	return count;
}

//carNum
//return the number of car inside linked list
template <class T>
int Linked_List<T>::carNum()
{
	int count = 0;
	if(isEmpty() == true)
	{
		return 0;
	}

	for(CURSOR = FRONT_ptr; CURSOR != NULL; CURSOR = CURSOR->link)
	{
		if(CURSOR->v.getType() == 'c')
			count++;
	}
	return count;
}

//truckNum
//return the number of truck inside linked list
template <class T>
int Linked_List<T>::truckNum()
{
	int count = 0;
	if(isEmpty() == true)
	{
		return 0;
	}

	for(CURSOR = FRONT_ptr; CURSOR != NULL; CURSOR = CURSOR->link)
	{
		if(CURSOR->v.getType() == 't')
			count++;
	}
	return count;
}

//waitTime
//return total wait time in intersection for all vehicles
template <class T>
double Linked_List<T>::totalWaitTime()
{
	double waitTime = 0.0;
	double total = 0.0;
	if(isEmpty() == true)
	{
		return 0;
	}
	for(CURSOR = FRONT_ptr; CURSOR != NULL; CURSOR = CURSOR->link)
	{
		waitTime = CURSOR->v.getTimeExit() - CURSOR->v.getTimeEntered();
		total = waitTime + total;
	}
	return total;
}
#endif
