//complex

#include<iostream>
using namespace std;

class complex
{
float x,y;
public:
	complex()
	{x=0;y=0;
	}
/*complex(float real,float img)
{
	x=real,y=img;
}*/
complex operator+(complex);
complex operator*(complex);
//void display();
friend istream &operator>> (istream &a,complex &b);
    friend ostream &operator<< (ostream &c,complex &d);
};

istream &operator >>(istream &a,complex &b)
{
cout<<"\n\n\tenter the real and img values";
a>>b.x;
a>>b.y;
return a;
}

ostream &operator<< (ostream &c,complex &d)
{
c<<d.x<<"+("<<d.y<<")i";
return c;
}
complex complex::operator+(complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return(temp);
}

complex complex::operator*(complex m)
{
complex temp;
temp.x=(x*m.x)-(y*m.y);
temp.y=(x*m.x)+(y*m.y);
return(temp);
}

/*void complex::display()
{
cout<<x<<"+i"<<y<<"\n";
}
int main()
{
complex c1,c2,c3,c4;
c1=complex(2.7,3.1);
c2=complex(2.2,3.2);
c3=c1+c2;
c4=c1*c2;
cout<<"c1="; c1.display();
cout<<"c2="; c2.display();
cout<<"c3="; c3.display();
cout<<"c4="; c4.display();
}*/


int main()
{
complex c1,c2,c3,c4;

char ch='y';
int o;

while(ch=='y')
{
cout<<"***********MENU*********";
cout<<"\n\n\t1.addition\n\n\t2.multiplication\n\n\tenter your choice";
cin>>o;

switch(o)
{

case 1:	cout<<"\n\n\tenter your values";
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<"\n\n\tthe answer is:"<<c3;
break;

case 2:	cout<<"\n\n\tenter the values";
	cin>>c1;
	cin>>c2;
	c4=c1*c2;
	cout<<"\n\n\tthe answe is:"<<c4;
break;

default:
cout<<"\n\n\tenter a valid choice";
}
cout<<"\n\n\tcontinue (y/n)??";
cin>>ch;
}
return 0;
}
