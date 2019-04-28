#include <iostream>
#include <cassert>

using namespace std;

double inchToCentimeter(double inchValue);

int main(int argc, char* argv[])
{
	cout << "The centimeter value is: " << inchToCentimeter(2) << endl;
	return 0;
}

double inchToCentimeter(double inchValue)
{
	assert(inchValue > 0);
	return 2.54 * inchValue;
}
