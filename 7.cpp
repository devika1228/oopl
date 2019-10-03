#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line ,a,b;
	ofstream myfile("test.txt");
	if(myfile.is_open())
		{
		/*cout<<"Enter information\n";
		cin>>a;
		cin>>b;
		myfile<<a;
		myfile<<b;*/
			myfile<<"This is line \n";
			myfile<<"This is another line\n";

		
	myfile.close();
}
	else
	cout<<"Unable to open file";
	ifstream myfile1("test.txt");
	if(myfile1.is_open())
		{
			while(getline(myfile1,line))
			{
				cout<<line<<"\n";
			}
		myfile1.close();
		}
return 0;
}
