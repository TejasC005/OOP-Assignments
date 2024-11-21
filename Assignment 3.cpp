//Assignment 3
/*28/08/2024
personal information center
*/


#include<iostream>
#include<string.h>
using namespace std;
int n,i;
class pinfo{
private:static int cnt;
	char *name,*add,*dlno,bg[3];
	int pno,tel,ht,wt,dob;

public:
	pinfo()
	{
		name=new char;
		add=new char;
		dlno=new char;
		strcpy(name,"Tejas");
		strcpy(add,"Dharangaon");
		strcpy(dlno,"DL262524");
				
		
		dob=2005;
		pno=100;
		tel=999999;
		ht=10;
		wt=50;
	}
	//Parameterized Constructor
	pinfo(int a,int b,int x,int y,int z){
		name=new char;
		add=new char;
		dlno=new char;
		strcpy(name,"Sarthak");
		strcpy(add,"Shrirampur");
		strcpy(dlno,"DL233445");
		
		dob=a;
		pno=b;
		tel=x;
		ht=y;
		wt=z;
	}
	//Copy Constructor
	pinfo(pinfo &tt)
	{
		name=new char;
		add=new char;
		dlno=new char;
		strcpy(name,"Tejas");
		strcpy(add,"Dharangaon");
		strcpy(dlno,"DL262524");
		
		dob=tt.dob;
		pno=tt.pno;
		tel=tt.tel;
		ht=tt.ht;
		wt=tt.wt;
	}
	void accept()
	{
		cout<<"\nEnter details:";
		cout<<"\nName\tAddress\tDno\tPno\ttel no\theight\tWeight\n";
		cin>>name>>add>>dlno>>pno>>tel>>ht>>wt;
		cnt++;
	}
	void display();
	static void displaycnt()
	{
		cout<<"\nThe count is "<<cnt<<endl;
	}
	void update();
	void Del();
	
	friend void search();
	~pinfo()
	{
		delete name;
		delete add;
		delete dlno;
		
	}
}p[10];

void search()
{
	int pp,f=0;
	cout<<"Enter policy no: ";
	cin>>pp;
	for(i=0;i<n;i++)
	{
		if(pp==p[i].pno)
		{
			f=1;
			cout<<"\nName\tAddress\tDno\tPno\ttel no\theight\tWeight\n";
			p[i].display();	
			break;
		}
	}
	if(f==0)
	{
		cout<<"\nDetails not found";
	}
}


int pinfo::cnt;

void pinfo::update()
{
	int pp,f=0;
	cout<<"Enter policy no: ";
	cin>>pp;
	for(i=0;i<n;i++)
	{
		if(pp==p[i].pno)
		{
			f=1;
			cout<<"\nDetails of policy number "<<pp<<endl;
			cout<<"\nName\tAddress\tDno\tPno\ttel no\theight\tWeight\n";
			p[i].display();	
			cout<<"\nEnter the new details\n"<<endl;
			p[i].accept();
			break;
		}
	}
	if(f==0)
	{
		cout<<"\nDetails not found";
	}


}


void pinfo::Del()
{
	int pp,f=0;
	cout<<"Enter policy no: ";
	cin>>pp;
	for(i=0;i<n;i++)
	{
		if(pp==p[i].pno)
		{
			f=1;
			do{
				p[i]=p[i+1];
				i++;
			}while(i<n);
			n--;
			break;
		}
	}
	if(f==0)
	{
		cout<<"\nDetails not found";
	}






}


void pinfo::display()
{
//	cout<<"\nName\tAddress\tDno\tPno\ttel no\theight\tWeight\n";
	cout<<name<<"\t"<<add<<"\t"<<dlno<<"\t"<<pno<<"\t"<<tel<<"\t"<<ht<<"\t"<<wt<<endl;
}
int main()
{
	int ch;
	cout<<"Enter number of records: ";
	cin>>n;
	do{
		cout<<"\nMAIN MENU\n";
		cout<<"\n1.Accept\n2.Display\n3.Search\n4.View static Data\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:for(i=0;i<n;i++)
			{
				p[i].accept();
			}
		break;
		case 2:cout<<"\nName\tAddress\tDno\tPno\ttel no\theight\tWeight\n";
			for(i=0;i<n;i++)
			{
				p[i].display();
			}
		break;
		case 3: search();
		break;
		
		case 4:pinfo::displaycnt();
		break;
		case 5: p[0].update();
		break;
		case 6: p[0].Del();
		break;
		default:cout<<"\nInvalid Choice";
		
		}
	}while(ch!=0);
return 0;
}









