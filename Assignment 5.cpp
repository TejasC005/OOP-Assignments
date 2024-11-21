//    Assignment 5
/*Implement C++ program to implement a base class consisting of the
data members such as name of the student, roll number and subject. The derived class consists of the data members subject code ,internal
assessment and university examination marks. The program should display the result.
*/

#include<iostream>
using namespace std;
int i;
class student{
	int roll_no;
	string name,prn;
public:
	void acceptS();
	void displayS();
};
//ACCEPT FUNCTION FOR STUDENT CLASS
void student::acceptS()
{
	cout<<"\nEnter your name: ";
	cin>>name;
	cout<<"\nEnter your roll number: ";
	cin>>roll_no;
	cout<<"\nEnter your prn : ";
	cin>>prn;
}
//DISPLAY FUNCTION FOR STUDENT CLASS
void student::displayS()
{
	cout<<"\nNAME\tROLL NO\tPRN NO\n";
	cout<<name<<"\t"<<roll_no<<"\t"<<prn<<endl;
}
//TEST CLASS DERIVED VIRTUALLY FROM THE STUDENT CLASS
class Test:virtual public student{
string s[3];
int c[3],e[3];
public:
	int total;
	void acceptT()//Accept fuction to accept marks 
	{	
		acceptS();
		for(i=0;i<3;i++)
		{
			cout<<"\nEnter "<<i+1<<" subject name : ";
			cin>>s[i];
			cout<<"Enter cia & end sem marks of "<<s[i]<<" : ";
			cin>>c[i]>>e[i];
		}
	}
	void displayT()//display function to display the marks
	{	
		displayS();
		cout<<"\nSub\tCIA\tEndsem marks\n";
		for(i=0;i<3;i++)
		{
			cout<<s[i]<<"\t"<<c[i]<<"\t\t"<<e[i]<<endl;
			total+=c[i]+e[i];
		}
	}
};

//SPORT CLASS DERIVED VIRTUALLY FROM STUDENT CLASS
class Sport:virtual public student
{
	string sname,sgrade;
public:
	void acceptSp()
	{
		cout<<"\nEnter the sport name: ";
		cin>>sname;
		cout<<"Enter your sport grade: ";
		cin>>sgrade;
	}
	void displaySp()
	{
		cout<<"\nSport Details: \n";
		cout<<"Name\tGrade"<<endl;
		cout<<sname<<"\t"<<sgrade;
	}
};

//RESULT CLASS DERIVED FROM TEST CLASS AND SPORT CLASS
class Result:public Test, public Sport
{
	
public:
	float per;
		void acceptAll()
		{
			acceptT();		
			acceptSp();
		}
		void displayAll()
		{
			cout<<"\n*********************RESULT********************\n";
			displayT();
			displaySp();
			per=((float)total)/(3);
			cout<<"\nYou scored "<<total<<" marks out of 300";
			cout<<"\nYour percentage is: "<<per<<"%";
		}

}res;
int main()
{
	int ch;
	do{
		cout<<"\nMain Menu\n";
		cout<<"\n1.Accept \n2.Display \n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:res.acceptAll();
			break;
			case 2:res.displayAll();
			break;
		}
	}while(ch!=0);
return 0;
}
