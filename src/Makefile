Driver.out: Driver.o TrafficSim.o Vehicle.o IntersectionFlowRate.o Linked_List.o ResultVehicle.o
	g++ -ansi -Wall Driver.o TrafficSim.o Vehicle.o IntersectionFlowRate.o Linked_List.o ResultVehicle.o -o Driver.out

Driver.o: Driver.cpp
	g++ -ansi -Wall -c Driver.cpp

TrafficSim.o: TrafficSim.cpp TrafficSim.h
	g++ -ansi -Wall -c TrafficSim.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -ansi -Wall -c Vehicle.cpp

IntersectionFlowRate.o: IntersectionFlowRate.cpp IntersectionFlowRate.h
	g++ -ansi -Wall -c IntersectionFlowRate.cpp

Linked_List.o: Linked_List.cpp Linked_List.h
	g++ -ansi -Wall -c Linked_List.cpp

ResultVehicle.o: ResultVehicle.cpp ResultVehicle.h
	g++ -ansi -Wall -c ResultVehicle.cpp

clean:
	rm -f *.o Driver.out *~ *.gch

run:   
	./Driver.out $(STRING)
