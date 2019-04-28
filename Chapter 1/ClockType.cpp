#include "ClockType.hpp"

int main(int argc, char* argv[])
{
	ClockType time(17, 15, 10);

	time.printTime();
	time = time.getTime();
	time.printTime();	

	return 0;
}

