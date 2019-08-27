#include<iostream>

#include<time.h>

using namespace std;

void checkNum(int,int);

int c ;

int main()

{

	srand(time(0));

	int n = rand()%10;

	int o;

	cout<<"### Welcome to guessing number game ###"<<endl;

	cout<<"Secret number has been chosen"<<endl;

	do{

	cout<<"Guess the number (1 to 10): ";

	cin>>o;

	checkNum(n,o);

	c=c+1;

	}while(n!=o);

	

	cout<<"The secret number is "<< n <<endl;

	cout<<"You made "<< c <<" Guesses "<<endl;

	return (0);



}

void checkNum(int a,int b)

{

		if(a==b) cout<<"Congratulations!."<<endl;

		else if(a > b) cout<<"The secret number is higher"<<endl;

		else cout<<"The secret number is lower"<<endl;

}