#include<iostream>
#include<fstream>
using namespace std;

int count(string n,char ch)
{
fstream file;
file.open(n.c_str(),ios::in);
{
if(!file)
{
cout<<"error reading file \n";
return(1);
}
int counter=-1;
char data[80];
cout<<"\n\n\tcontents of files are: \n ";
while(file)
{
file.getline(data,80);
cout<<data<<endl;
if(data[0]!=ch)
counter++;
}
return counter;
}
}
int main()
{
string name;
cout<<"\n\n\tenter the file name:\n";
cin>>name;
char ch;
cout<<"\n\n\tenter char ";
cin>>ch;
int c=count(name,ch);
cout<<"\n\n\tno of lines not starting with"<<ch<<"are:"<<c<<endl;
return 0;
}

