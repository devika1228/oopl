#include<iostream>
using namespace std;

class user
{public:
int age,income;
string city;
char c;
void get_age();
void get_income();
void get_city();
void get_car();
};

void user::get_age()
{
try
{
cout<<"\n\n\tenter age:";
cin>>age;

if(age>18 && age<55)
{
cout<<"age is:"<<age;
}
else
{
throw age;
}
}
catch(int)
{
cout<<"\n\n\texception caught:the age should be between 18-55\n";
}
}

void user::get_income()
{
try
{
cout<<"\n\n\tthe income is:";
cin>>income;

if(income>50000 && income<100000)
{
cout<<"income is:"<<income;
}
else
{
throw income;
}
}
catch(int)
{
cout<<"\n\n\texception caugth:the income should be between 50k-10lakhs\n";
}
}

void user::get_city()
{
try
{
cout<<"\n\n\tthe user stays in:";
cin>>city;

if(city=="pune"||city=="mumbai"||city=="banglore"||city=="chennai")
{
cout<<"\n\n\tthe user stays in th city:";
}
else
{
throw city;
}
}
catch(string)
{
cout<<"\n\n\texception caught: the user should live in the given conditional cities\n";
}
}

void user::get_car()
{
try
{
cout<<"\n\n\tthe user owns a four wheeler:";
cin>>c;

if(c=='y'||c=='Y')
{
cout<<"\n\n\tthe user owns a four wheeler:";
}
else
{
throw c;
}
}
catch(char)
{
cout<<"\n\n\texception caught:the user must own a four wheeler\n\n";
}
}

int main()
{
user u;
u.get_age();
u.get_income();
u.get_city();
u.get_car();
}

