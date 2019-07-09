#include<iostream>
using namespace std;
int main ()
{
	float Fa,Ce;
	cout << "Enter Celcius temperatrun: ";
	cin >> Ce;
	Fa = (9.0/5.0*Ce )+32;
	cout << "\nFahrencheit = " << Fa << endl << endl;
	cout << "Now werther in Thailand is " << (Fa > 70 ? "Hot" : "Cool") << endl;
	return (0);
}