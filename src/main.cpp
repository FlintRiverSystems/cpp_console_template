
#include "pch.h"

#include <FRS_Utility_CPP/date_helper.h>

using namespace std;
using namespace FRS::utility;

int main (int argc, char** argv)
{
	cout << "Current Time is: " << date_helper::now() << endl;
	//cout << bf("Hello World: %d", 123) << endl;

	return 0;
}


