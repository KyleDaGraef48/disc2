#include <iostream>
using namespace std;



int main()
{
	// display variables and constants
	double a;
	double area;
	const double PI = 3.14159;
		
	 // prompt user to input radius 
	cout << "enter the radius of a circle";
	cin >> a;
	
	// compute area
	area = pow(a,2) * PI;	
		
        // display the area 
		
	cout << "the area of the ellipse is " << area;
	
	
	
	return 0;
	
}
