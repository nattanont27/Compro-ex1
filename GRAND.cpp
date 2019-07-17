#include<iostream>
using namespace std;
int main ()
{
	int grd;
	cout << "Enter score : ";
	cin >> grd;
	if (grd >= 0 && grd <= 59 ){
		cout << "Grade F." << endl;
	}
	else if (grd >= 60 && grd <= 69){
		cout << "Grade D." << endl;
	}
	else if (grd >= 70 && grd <= 79){
		cout << "Grade C." << endl;
	}
	else if (grd >= 80 && grd <= 89){
		cout << "Grade B." << endl;
	}
	else if (grd >= 90 && grd <= 100){
		cout << "Grade A." << endl;
	}
	else {
		cout << "Error!" << endl;
	}
	return (0);
}