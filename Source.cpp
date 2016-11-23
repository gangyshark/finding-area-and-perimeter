#include <iostream>
#include <string>

using namespace std;

int main()
{

	/********* Declarations *********/
	const string problemnamebyHarris = "Rectangle by William Harris";
	float A;
	float l;
	float h;
	float P;
	const float s=2.0;
	
	/********* Input *********/
	//prompt for declarations
	cout << "Enter any real positive number for Length (l):";
	cin >> l;

	cout << "Enter any real postive number for height (h):";
	cin >> h;

	/********* Processs *********/
	cout << problemnamebyHarris << endl;
	
	if (l <= 0 || h <= 0)
	{
		cout << "Area and perimeter can’t be found due to 0 being entered or a negative value" << endl;
	}
	else
	{
		A = l * h;
		cout << " area is :";
		cout << A << endl;
		P = (l * s) + (h * s);
		cout << " Perimeter is :";
		cout << P << endl;
	}
	return 0;
}