/*****************************************
** File:    Driver.cpp
** Project: CMSC 341 Project 1, Fall 2014
** Authoer: Jin Hui Xu
** Date:    9/29/2014
** Section: 05
** E-mail:  ac39537@umbc.edu
**
**    This file contains the main driver program for project 1.
** This program accept commond line argument for the traffic simulator.
**
*****************************************/


#include <iostream>
#include "TrafficSim.h"

using namespace std;

int main(int argc, char *argv[]) {

    //If there is an input file listed
    if (argc > 1) {
        TrafficSim *Sim = new TrafficSim(argv[1]);
        Sim->DoRun();
        delete Sim;
        Sim = NULL;

    //If no input file is specified.    
    } else {
        TrafficSim *Sim = new TrafficSim();
        Sim->DoRun();
        delete Sim;
        Sim = NULL;
    }

    return 0;
}