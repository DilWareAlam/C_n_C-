#include <iostream>
using namespace std;

int main()
{
	bool A = true;
	bool B = false;

	cout << B << " XOR " << B << " = ";
	if(B ^ B)
		cout << "True\n\n";
	else
		cout << "False\n\n";	//  <---------

	cout << A << " XOR " << B << " = ";
	if(A ^ B)//>
		cout << "True\n\n";	// <----------
	else
		cout << "False\n\n";

	cout << B << " XOR " << A << " = ";
	if(B ^ A)
		cout << "True\n\n";	// <----------
	else
		cout << "False\n\n";

	cout << A << " XOR " << A << " = ";
	if(A ^ A)//>
		cout << "True\n\n";
	else
		cout << "False\n\n";	// <----------
}
