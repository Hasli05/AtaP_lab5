using namespace std;
#include <iostream>
#include <math.h>


int main()
{
   	double a = 5.1;
	double b = 1.2;
	double c = -0.3;
	double d = -3.1;
	
	double y;

	double underSqrtRoot = c / d;
	double baseLn = pow(b, a);


	if ((underSqrtRoot > 0) && (baseLn > 0))
	{
		y = fabs(acos(sqrt(underSqrtRoot))) + 7 * log10(baseLn);
		cout << y << endl;
	}
	else
	{
		cout << "error" << endl;
	}
}

