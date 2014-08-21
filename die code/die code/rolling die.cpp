#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>

using namespace std;

int rollnum,x,y,value;

int rolldie(int num)
{

	int sum;
	int rollnum=0;
	srand(time(0));
	do
	{
	x=rand()%6 +1;
	y=rand()%6 +1;
	
	sum=x+y;
	rollnum++;
	
	}

	while(sum!=num);
	
	return rollnum;
	



}
void main()
{ 
	cout<<"Enter -999 to terminate the program"<<endl;

	do
	{
		cout<<"Type in the sum til which both die should equal to";
	    cin>>value;
		if(value==-999)
			return;
		
		cout<<"The die had to be rolled "<<rolldie(value)<<" times"<<endl;

	}
	while(value!=-999);






	_getch();
}