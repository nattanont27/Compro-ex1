#include<iostream>
#include<string>
#include<time.h>
#include<iomanip>
using namespace std;
void display(int A[5][6]);
void graph(int A[5][6]);

int main()
{  srand(time(NULL));
	int A[5][6];
   for(int j = 0 ; j < 5; j++){

		for(int k = 0 ; k < 6; k++){

			A[j][k] =  rand()%10;

		}
 }
   display(A);

   graph(A);
}

void display(int A[5][6])
{  
 

   #include<iostream>
#include<string>
#include<time.h>
#include<iomanip>
using namespace std;
void display(int A[5][6]);
void graph(int A[5][6]);

int main()
{  srand(time(NULL));
	int A[5][6];
   for(int j = 0 ; j < 5; j++){

		for(int k = 0 ; k < 6; k++){

			A[j][k] =  rand()%10;

		}
 }
   display(A);

   graph(A);
}

void display(int A[5][6])
{  
 

   for(int j = 0; j < 5 ; j++)
   {
	   for(int k = 0; k < 6 ; k++)
	   {
		 A[j][k];
		  cout<<fixed<<setw(8)<<setprecision(2)<<A[j][k]<< " ";
	   }
	   cout<<endl;
   }
}
void graph(int A[5][6])
{
    cout<<endl;
   cout<<"--------------------------display graph ----------------------------"<<endl;
	   for(int f = 0; f < 6 ; f++)
	   {
		   cout<<fixed <<setw(8) << f <<" ";
	   }
   cout<<endl;
   cout<<"--------------------------------------------------------------------"<<endl;
   srand(time(0));
    for(int j = 0 ; j < 5; j++){

		cout << j <<"|\t"<<endl;

	for(int k = 0 ; k < 6; k++){
		  A[j][k];
		  if(A[j][k] == 0)
		  {		   
		  cout<<fixed<<setw(9)<<" ";
		  }
		  else cout<<fixed<<setw(9)<<"*";
	   }
	   cout<<endl;
   }
      	}