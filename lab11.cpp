

#include<iostream>

#include<string>

using namespace std;

void ListStudent(string name[],int num[],int n);

char Calgrade(int num);

int main()

{

	int num[100],n;

	string name[100];

	cout<<"Input Number of Student : ";

	cin>>n;

	for(int i=1 ;i<=n;i++)

	{

		cout<<"Input Name : ";

		cin>>name[i];

		cout<<"Input Score : ";

		cin>>num[i];

		cout<<endl;

	}

	ListStudent(name,num,n);

	return(0);

}

void ListStudent(string name[],int num[],int n)

{

	for(int i=1;i<=n;i++){

		cout<<"Student Name : "<<name[i]<<"  "<< "Score : " <<num[i]<<"  "<<"You grade is : "<< Calgrade(num[i])<<endl;

		}

}char Calgrade(int num)

{

	char grade=' ';

	if(num>=80 && num<=100)

		grade = 'A';

	else if (num>=70 && num<=79)

		grade = 'B';

	else if (num>=60 && num<=69)

		grade = 'C';

	else if (num>=50 && num<=59)

		grade = 'D';

	else

		grade = 'F';

	return grade;

