//Assignment 8
/*
Write a function template selection Sort. Write a program that inputs, sorts and outputs an integer array and a float array.
*/

#include<iostream>
using namespace std;
#define size 10
int s;
template< class T>
void selsort(T a[size],int n)
{
	T temp;
	cout<<"Enter the number of elements in the array: ";
	cin>>s;
	cout<<"Enter array:"<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

template<class T>
void display(T a[size],int n)
{
	cout<<"sorted array is: "<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<a[i]<<endl;
	}	
}

int main()
{

int ch;
int aa[10];
float bb[10];
char cc[10];
	do{
		cout<<"\nMain Menu\n";
		cout<<"1.Integer type\n2.Float type\n3.Char type"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
	switch(ch)
	{
		case 1:selsort(aa,s);
			cout<<endl;
			display(aa,s);
		break;
		case 2:selsort(bb,s);
			cout<<endl;
			display(bb,s);
		break;
		case 3:selsort(cc,s);
			cout<<endl;
			display(cc,s);
		break;
	}
	}while(ch!=0);
return 0;
}
