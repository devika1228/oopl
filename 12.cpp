 

#include<iostream>
#include<string.h>
using namespace std;

class telno
{
	public:
	char name[30];
	int i;
	long no,no1;
	static int cnt;
	void insert();
	void display();
	static int count();
};

void telno::insert()
{
   cout<<"\n\tEnter The Name :\n";
   cin>>name;
   cout<<"\n\tEnter The Telephone No :\n";
   cin>>no;
}

void telno::display()
{
  cout<<"\n\t"<<this->name;
  cout<<"\t"<<this->no;
}

int telno::cnt=0;
int telno::count()
{
  cnt++;
  return cnt;

}
   
 int main()
{
	int ch,ch1,i,n=0,op,flag=0;
	long no,no1;
	telno ob[50];
	char name[15];
	
do
{
	cout<<"\n\t_________________________________\n";
	cout<<"\t\t--MENU--\n";
        cout<<"\t1.Insert\n\t2.Display\n\t3.Search Name Record\n\t4.Serach Phone Record\n\t5.Update\n\n";
 	
	cout<<"\tEnter Ur Choice";
	cin>>ch;

switch(ch)
{
	case 1:
	cout<<"\nNew Record ? Enter 1 For New Record";
	cin>>ch1;
	ob[n].insert();
	n=telno::count();
	break;

	case 2:
	for(i=0;i<n;i++)
	{
	ob[i].display();
	}
	break;

	case 3:
	cout<<"\nEnter The Name To Be Searched\n";
	cin>>name;
	
	for(i=0;i<n;i++)
	{
	if(strcmp(name,ob[i].name)==0)
		{
		flag=1;
		ob[i].display();
		break;
		}
	}
	if(flag==0)
	{
	cout<<"\n\tOhh.. No Record found";
	}
	break;

        case 4:
	cout<<"\nEnter The Telephone No To Be Searched\n";
	cin>>no;
	
	for(i=0;i<n;i++)
	{
	if(no==ob[i].no)
		{
		flag=1;
		ob[i].display();
		break;
		}
	}
	if(flag==0)
	{
	cout<<"\n\tOhh.. No Record found";
	}
	break;

	case 5:
 	cout<<"\nEnter The Name\nl";
	cin>>name;

	cout<<"\nEnter The No. to be Update\n";
	cin>>no1;

	for(i=0;i<n;i++)
	{
	if(strcmp(name,ob[i].name)==0)
		{
		ob[i].no=no1;
		}
	}
	break;
}

 	cout<<"\n\tCONTINUE--";
	cin>>op;
}while(op!=0);
 return 0;
}





















