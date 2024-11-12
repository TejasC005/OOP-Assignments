//Assignment 7
/*
Create a C++ class named Television that has data members to hold the
model number and the screen size in inches, and the price. Member
functions include overloaded insertion and extraction operators. If more
than four digits are entered for the model, if the screen size is smaller
than 12 or greater than 70 inches, or if the price is negative or over
$5000 then throw an integer. Write a main() function that instantiates a
television object, allows user to enter data and displays the data
members .If an exception is caught, replace all the data member values
with zero values.
*/

#include <iostream>
using namespace std;
class Television{
      int m,ss,price;
public:
      friend ostream& operator<<(ostream&, Television&);//Overloading the insertion operator
      friend istream& operator>>(istream&,Television&);//Overloading the extraction operator
}tv;

istream& operator>>(istream& tin, Television &t)
{
	  int e;
  	cout<<"Enter model no, price and screen size: ";
  	tin>>t.m>>t.price>>t.ss;
  	try
    {
    		if(t.m>9999||t.price<0||t.price>400000||t.ss>70||t.ss<12)
    		{
    				throw e;
    		}	
	  }
	catch(int e)
	{
		cout<<"Exception occured "<<endl;
		t.m=0;
		t.price=0;
		t.ss=0;
	}
	return tin;
}

ostream& operator<<(ostream& tout, Television &t)
{
	tout<<"Television details: "<<endl;
	tout<<"Model NO. ="<<t.m<<"\nPrice= "<<t.price<<"\nSCreen Size: "<<t.ss<<endl;
return tout;
}


int main()
{	
	Television t;
	int ch;
	do{
		cout<<"\nMain Menu\n";
		cout<<"1.Accept\n2.Display"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
	switch(ch)
	{
		case 1:cin>>t;
		break;
		case 2: cout<<t;
		break;
	
	}
	}while(ch!=0);
	
return 0;
}
