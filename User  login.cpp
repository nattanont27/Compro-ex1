 #include <iostream>
#include <string>
using namespace std;
int main()
{
	char A1;
	int Password1,Password2;
	string User1,User2;
	 cout<<"================menu================\n";

	 do{
		 cout<<"1.Register\n";
		 cout<<"2.Login\n";
		 cout<<"Q.Exit Program\n";
		 cout<<"Enter Menu :";
		 cin>>A1;
		 if (A1 == '1') {
	 cout<<"==============Register==============\n";
     cout<<"User :";
	 cin>> User1;

	 cout<<"Password :";
	 cin>> Password1;
	 cout << endl;
		 }
		 else if (A1 == '2')
		 {
			 cout<<"===============Login================\n";
			 cout<<"Username : ";
			 cin>>User2;
			 cout<<"Password :";
			 cin>>Password2;
			 cout << endl;
         if (User2==User1 && Password2==Password1){
					cout << "Username or password correct :) \n\n";
		 }
		 else {
		 
		  do{
			  cout<<"!!!!Username or password incorrect Please try again!!!!\n\n";
			 cout<<"Username : ";
			 cin>>User2;
			 cout<<"Password :";
			 cin>>Password2;
		 }while (User2 != User1 , Password2 != Password1);
		  cout << "Username or password correct :) \n\n";}
		 }
	 }while (A1 != 'q' );
	  cout<<"=============EndProgram=============\n";
	  cout<<"Exit program.........."<<endl;

	  return(0);}