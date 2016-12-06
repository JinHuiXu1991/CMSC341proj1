/*****************************************
** File:    TrafficSim.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the source code of TrafficSim class for project 1.
** This program contains the implementations of methods and member functions
** for TrafficSim class.
**
*****************************************/

#include "TrafficSim.h"
#include<queue>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

//initializer list
TrafficSim::TrafficSim(string filename)
{
	file = filename;
}

TrafficSim::TrafficSim(){}


//readFromFile
//read the file to gather flow rate
void TrafficSim::readFromFile(string filename)
{
	ifstream infile;
	char direction, test;
	int carFlowRate;
	int truckFlowRate;

	infile.open(filename.c_str(), ios_base::in);

	while (!infile.eof( ))
	{
		infile >> direction >> test >> carFlowRate >> truckFlowRate;
		if(direction == 'E')
		{
			flowRate.setEastFlowRateCars(carFlowRate);
			flowRate.setEastFlowRateTrucks(truckFlowRate);
		}
		else if(direction == 'W')
		{
			flowRate.setWestFlowRateCars(carFlowRate);
			flowRate.setWestFlowRateTrucks(truckFlowRate);
		}
		else if(direction == 'S')
		{
			flowRate.setSouthFlowRateCars(carFlowRate);
			flowRate.setSouthFlowRateTrucks(truckFlowRate);
		}
		else
		{
			flowRate.setNorthFlowRateCars(carFlowRate);
			flowRate.setNorthFlowRateTrucks(truckFlowRate);
		}
	}
	
	//exit the program if the file is not open successfully. 
	if(infile.fail())
	{
		cout << "The file was not successfully open." << endl;
		exit(1);
	}

	infile.close();

}

//printBoard
//print the intersection for every simulation second
void TrafficSim::printBoard(int time)
{
	//print the southbound result
	//run through each condition to print the correct result
	cout << "	SB " << southbound->size() << endl;
	if(southbound->size() == 0)
	{
		cout << endl << endl << endl << endl;
		cout << " EB " << endl;
		cout << " " << eastbound->size() << endl;
	}
	else if(southbound->size() == 1)
	{
		cout << endl << endl << endl << endl;
		cout << " EB " << endl;
		//check the front vehicle type
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
		
	}
	else if(southbound->size() == 2)
	{
		cout << endl << endl << endl << endl;
		cout << " EB " << "     x" << endl; 
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
	}
	else if(southbound->size() == 3)
	{
		cout << endl << endl << endl;
		cout << "         x" << endl;
		cout << " EB " << "     x" << endl; 
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
	}
	else if(southbound->size() == 4)
	{
		cout << endl << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << " EB " << "     x" << endl; 
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
	}
	else if(southbound->size() == 5)
	{
		cout << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << " EB " << "     x" << endl; 
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
	}
	else if(southbound->size() >= 6)
	{
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << " EB " << "     x" << endl; 
		if(southbound->front().getType() == 'c')
			cout << " " << eastbound->size() << "       c " << endl;
		else
			cout << " " << eastbound->size() << "       t " << endl;
	}

	//print the eastbound result
	//run through each condition to print the correct result
	if(eastbound->size() == 0)
	{

	}
	if(eastbound->size() == 1)
	{
		if(eastbound->front().getType() == 'c')
			cout << "       c";
		else
			cout << "       t";
	}
	if(eastbound->size() == 2)
	{
		if(eastbound->front().getType() == 'c')
			cout << "      xc";
		else
			cout << "      xt";
	}
	if(eastbound->size() == 3)
	{
		if(eastbound->front().getType() == 'c')
			cout << "     xxc";
		else
			cout << "     xxt";
	}
	if(eastbound->size() == 4)
	{
		if(eastbound->front().getType() == 'c')
			cout << "    xxxc";
		else
			cout << "    xxxt";
	}
	if(eastbound->size() == 5)
	{
		if(eastbound->front().getType() == 'c')
			cout << "   xxxxc";
		else
			cout << "   xxxxt";
	}
	if(eastbound->size() >= 6)
	{
		if(eastbound->front().getType() == 'c')
			cout << "  xxxxxc";
		else
			cout << "  xxxxxt";
	}

	//print the westbound result
	//run through each condition to print the correct result
	if(westbound->size() == 0)
	{

	}
	if(westbound->size() == 1)
	{
		if(westbound->front().getType() == 'c')
			cout << "   c";
		else
			cout << "   t";
	}
	if(westbound->size() == 2)
	{
		if(westbound->front().getType() == 'c')
			cout << "   cx";
		else
			cout << "   tx";
	}
	if(westbound->size() == 3)
	{
		if(westbound->front().getType() == 'c')
			cout << "   cxx";
		else
			cout << "   txx";
	}
	if(westbound->size() == 4)
	{
		if(westbound->front().getType() == 'c')
			cout << "   cxxx";
		else
			cout << "   txxx";
	}
	if(westbound->size() == 5)
	{
		if(westbound->front().getType() == 'c')
			cout << "   cxxxx";
		else
			cout << "   txxxx";
	}
	if(westbound->size() >= 6)
	{
		if(westbound->front().getType() == 'c')
			cout << "   cxxxxx";
		else
			cout << "   txxxxx";
	}
	cout << endl;

	//print the northbound result
	//run through each condition to print the correct result
	if(northbound->size() == 0)
	{
		cout << endl << "                WB"<< endl;
		cout << "                 " << westbound->size() << endl;
		cout << endl << endl << endl;
	}
	else if(northbound->size() == 1)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "                WB" << endl;
		cout << "                " << westbound->size() << endl;
		cout << endl << endl << endl;
		
	}
	else if(northbound->size() == 2)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "         x" << "      WB" << endl;
		cout << "                 " << westbound->size() << endl;
		cout << endl << endl << endl;
	}
	else if(northbound->size() == 3)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "         x" << "      WB" << endl;
		cout << "         x" << "      " << westbound->size() << endl;
		cout << endl << endl << endl;


	}
	else if(northbound->size() == 4)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "         x" << "      WB" << endl;
		cout << "         x" << "      " << westbound->size() << endl;
		cout << "         x" << endl;
		cout << endl << endl;
	}
	else if(northbound->size() == 5)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "         x" << "      WB" << endl;
		cout << "         x" << "      " << westbound->size() << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << endl;
	}
	else if(northbound->size() >= 6)
	{
		if(northbound->front().getType() == 'c')
			cout << "         c" << endl;
		else
			cout << "         t" << endl;
		cout << "         x" << "      WB" << endl;
		cout << "         x" << "      " << westbound->size() << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
		cout << "         x" << endl;
	}

	cout << "      NB " << northbound->size() << endl;
	cout << " at clock:   " << time << endl;
	cout << " ---------------------------------" << endl << endl;

}

//addVehicle
//add vehicle to specific queue depending on the direction
void TrafficSim::addVehicle(char direction, Vehicle x)
{

	if(direction == 'E')
	{
		eastbound->push(x);
	}
	else if(direction == 'W')
	{
		westbound->push(x);
	}
	else if(direction == 'S')
	{
		southbound->push(x);
	}
	else if(direction == 'N')
	{
		northbound->push(x);
	}
	
}

//DoRun
//start the traffic light simulation
void TrafficSim::DoRun()
{
	const int SIM_TIME = 120; //simulation time
	const int MIN_NS_GREEN = 30; // minimum length green for NS light
	const int MAX_EW_GREEN = 30; // maximum length green for EW light
	const int MIN_EW_GREEN = 10; // minimum length green for EW light
	int waitNorth = 0, waitSouth = 0, waitEast = 0, waitWest = 0; //wait time for four direction trucks

	eastbound = new queue<Vehicle>;
	westbound = new queue<Vehicle>;
	northbound = new queue<Vehicle>;
	southbound = new queue<Vehicle>;
	results = new Linked_List<ResultVehicle>;

	string northSouthLight = "Green"; //NS traffic light

	//each direction start with 2 cars
	//so add 2 cars in each direction at clock 0
	eastbound->push(Vehicle('c', 0));
	eastbound->push(Vehicle('c', 0));
	westbound->push(Vehicle('c', 0));
	westbound->push(Vehicle('c', 0));
	northbound->push(Vehicle('c', 0));
	northbound->push(Vehicle('c', 0));
	southbound->push(Vehicle('c', 0));
	southbound->push(Vehicle('c', 0));
	
	//read from file and gather flow rate
	readFromFile(file);

	//print the 0 second intersection.
	printBoard(0);

	int timer = 1; //traffic light timer
	//start simulation which has duration of 120s
	for(int i = 1; i <= SIM_TIME; i++)
	{
		//determine if the light should change
		//start at NS light at green.
		if(northSouthLight == "Green")
		{
			//if the minimally green for NS isn't meet or east and west are empty, keep NS light green
			if(timer <= MIN_NS_GREEN || (eastbound->empty() && westbound->empty()))
			{
				//increase the traffic light timer.
				timer++;
			}
			//if the minimally green for NS is met and east and west are not empty, change light
			else if(timer >=  MIN_NS_GREEN && (!eastbound->empty() && !westbound->empty()))
			{
				northSouthLight = "Red";
				cout << "Light has to change. Met minimum length green, other side (EW) is waiting." << endl;
				//reset the timer.
				timer = 1;
			}
		}
		//if the NS light is red, which means the EW light is green.
		else 
		{
			//check if the EW light meet the minimally green.
			if(timer <= MIN_EW_GREEN)
			{
				timer++;
			}
			//if the EW light duration is between minimum 10s and maximum 30s
			else if(timer > MIN_EW_GREEN && timer <= MAX_EW_GREEN)
			{
				//check if east and west are empty
				//if they are not empty, keep EW light green
				if(!eastbound->empty() && !westbound->empty())
					timer++;
				//if they are empty, change light
				else if(eastbound->empty() && westbound->empty())
				{
					northSouthLight = "Green";
					cout << "Light has to change. EW is empty, other side (NS) is primary, try to keep green." << endl;
					timer = 1;
				}
			}
			//if duration of EW light met maximally green, change light
			else if(timer == MAX_EW_GREEN)
			{
				northSouthLight = "Green";
				cout << "Light has to change. Met maximum length green, other side (NS) is waiting." << endl;
				timer = 1;
			}
		}

		//remove vehicles from queue
		//if the NS light is green, remove vehicles from northbound and southbound
		if(northSouthLight == "Green")
		{
			//check if the queue is empty
			if(!northbound->empty())
			{
				//if queue is not empty, check the front vehicle type
				//if the front vehicle type is car
				if(northbound->front().getType() != 't')
				{
					//remove it from queue, and insert it into result linked list
					results->insert(ResultVehicle(northbound->front(), i));
					northbound->pop();
				}
				//if the front vehicle type is truck
				else
				{
					//check wait time meet before removing truck from queue
				        //becuase it takes 2 second to exit the intersection
					if(waitNorth == i)
					{
					        results->insert(ResultVehicle(northbound->front(), (i - 1)));
						northbound->pop();
						waitNorth = 0;
					}
					//delay the truck to remove from queue by one simulation second
					else
						waitNorth = i + 1;
				}
			}

			//remove the other direction vehicle by same way
			if(!southbound->empty())
			{
				if(southbound->front().getType() != 't')
				{
					results->insert(ResultVehicle(southbound->front(), i));
					southbound->pop();
				}
				else
				{
					if(waitSouth == i)
					{
					        results->insert(ResultVehicle(southbound->front(),(i - 1)));
						southbound->pop();
						waitSouth = 0;
					}
					else
						waitSouth = i + 1;
				}
			}	
		}
		//if the NS light is red, which means EW light is green
		//remove vehicles from eastbound and westbound
		else
		{
			if(!eastbound->empty())
			{
				if(eastbound->front().getType() != 't')
				{
					results->insert(ResultVehicle(eastbound->front(), i));
					eastbound->pop();
				}
				else
				{
					if(waitEast == i)
					{
					        results->insert(ResultVehicle(eastbound->front(), (i - 1)));
						eastbound->pop();
						waitEast = 0;
					}
					else
						waitEast = i + 1;
				}
			}
			if(!westbound->empty())
			{
				if(westbound->front().getType() != 't')
				{
					results->insert(ResultVehicle(westbound->front(), i));
					westbound->pop();
				}
				else
				{
					if(waitWest == i)
					{
					        results->insert(ResultVehicle(westbound->front(), (i - 1)));
						westbound->pop();
						waitWest = 0;
					}
					else
						waitWest = i + 1;
				}
			}	
		}
	
		//get the flow rate for each tvehicle 
		//and add the vehicle to queue depending on the direction
		//add car first when car and truck arrive at the same time.
		if(i % flowRate.getEastFlowRateCars() == 0)
		{
			addVehicle('E',Vehicle('c', i));
		}

		if(i % flowRate.getEastFlowRateTrucks() == 0)
		{
			addVehicle('E',Vehicle('t', i));
		}

		if(i % flowRate.getWestFlowRateCars() == 0)
		{
			addVehicle('W',Vehicle('c', i));
		}

		if(i % flowRate.getWestFlowRateTrucks() == 0)
		{
			addVehicle('W',Vehicle('t', i));
		}

		if(i % flowRate.getNorthFlowRateCars() == 0)
		{
			addVehicle('N',Vehicle('c', i));
		}

		if(i % flowRate.getNorthFlowRateTrucks() == 0)
		{
			addVehicle('N',Vehicle('t', i));
		}

		if(i % flowRate.getSouthFlowRateCars() == 0)
		{
			addVehicle('S',Vehicle('c', i));
		}

		if(i % flowRate.getSouthFlowRateTrucks() == 0)
		{
			addVehicle('S',Vehicle('t', i));
		}

		//print the intersection for each simulation second.
		printBoard(i);

	}
	
	//print the result at the end of project.
	cout << "The final results are: " << endl;
	cout << "The number of vehicles that passed through the intersection is: " << results->size() << endl;
	cout << "The number of cars that passed through the intersection is: " << results->carNum() << endl;
	cout << "The number of trucks that passed through the intersection is: " << results->truckNum() << endl;
	cout << "The average wait time for this intersection is: " << (results->totalWaitTime() / results->size()) << endl;

	//return heap memory
	delete eastbound;
	delete westbound;
	delete northbound;
	delete southbound;
	delete results;

}
