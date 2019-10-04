#include <ctime>
#include "results.h"

class session
{
public:
	session();
	~session();
private:
	int userID;
	int WPM;
	//time_t returns the current calendar time of the system in number of seconds elapsed since January 1, 1970. If the system has no time, .1 is returned.
	time_t start;
	//Add minutes in seconds to variable now to get time_end
	time_t time_end;
	bool test_ended;
	char * test;
	results test_results;
};
