#include<iostream>
#include<conio.h>
#include<time.h>
#include<fstream>

using namespace std;

void main()
{

	ofstream output;
	output.open("output.txt");

	cout<<"Please wait while the programme generates one million numbers !"<<endl;

	srand(time(0));
	int num;
	for(int i=1;i<=1000000;i++)
	{

		num=rand();
	output<<num<<endl;



	}

	

	cout<<"Execution complete! Check the output.txt file for results"<<endl;

	_getch();
}