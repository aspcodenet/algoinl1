#ifndef __DISPLAY_MESSAGE_END_POINT_H
#define __DISPLAY_MESSAGE_END_POINT_H

#include <string>

class DisplayMessageEndpoint
{
public:
	typedef struct
	{
		std::string time;
		std::string newTime;
		int destinationId;
		std::string track;
		int trainNo;
	} DisplayEntry;

	DisplayEntry GetDisplayMessage();
private:
	int GetRandom(int from, int to);
	int RandomizeDestination();
};

class DisplayMessageDestinationService
{
public:
	std::string GetDestinationName(int id);
};

#endif // __DISPLAY_MESSAGE_END_POINT_H