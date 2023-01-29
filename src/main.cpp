

#include <iostream>
#include <FRS_Utility_CPP/date_helper.h>

using namespace std;
using namespace FRS::utility;

int main (int argc, char** argv)
{
	cout << "Hello World!" << endl;
	cout << "Current Time is: " << date_helper::now() << endl;

	return 0;
}


