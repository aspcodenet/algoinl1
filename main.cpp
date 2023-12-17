#include <iostream>
#include "DisplayMessageEndpoint.h"

std::string getDestinationFrom(int destinationId)
{
	DisplayMessageDestinationService service;
	return service.GetDestinationName(destinationId);
}


int main(){
    DisplayMessageEndpoint endPoint;
	while (true)
	{
		DisplayMessageEndpoint::DisplayEntry nextDisplayMessage = endPoint.GetDisplayMessage();
		std::cout << nextDisplayMessage.time << "   " << nextDisplayMessage.newTime 
			<< "      " << nextDisplayMessage.track << "  " << getDestinationFrom(nextDisplayMessage.destinationId)
			<< std::endl;
	}    
    return 0;
}
