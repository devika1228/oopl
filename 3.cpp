//inheritance
#include<iostream>
using namespace std;

class per
{
public:
char name[30],contact[12];
int age;

void getdata()
{
cout<<"\nenter your name ";
cin>>name;
cout<<"\nenter age";
cin>>age;
cout<<"\nenter contact no.";
cin>>contact;

}

void display()
{

cout<<"*****************";
cout<<"PERSONAL DETAILS";
cout<<"*****************";
cout<<"\n1.NAME:"<<name;
cout<<"\n2.AGE:"<<age;
cout<<"\n3.CONTACT NO:"<<contact;
cout<<"\n";
}
};

class prof
{public:
char emp_id[30],position[30];
int expi;

void getdata()
{
cout<<"\nenter your emp_id ";
cin>>emp_id;
cout<<"\nenter position";
cin>>position;
cout<<"\nyears of expi";
cin>>expi;

}

void display()
{

cout<<"*****************";
cout<<"PROFESSIONAL DETAILS";
cout<<"*****************";
cout<<"\n1.EMP_ID:"<<emp_id;
cout<<"\n2.POSITION:"<<position;
cout<<"\n3.EXPERIENCE:"<<expi;
cout<<"\n";
}
};

class acad
{public:
int ssc,hsc,ug;

void getdata()
{
cout<<"\nenter your qualification ";
cin>>ssc>>hsc>>ug;

}

void display()
{

cout<<"*****************";
cout<<"ACADEMIC DETAILS";
cout<<"*****************";
cout<<"1.QUALIFICATION:";
cout<<"\nscc="<<ssc<<"%"<<"\n"<<"hsc="<<hsc<<"%\n"<<"ug="<<ug<<"%\n";
cout<<"\n";
}
};

class biodata:public per,public prof,public acad
{public:
void disp()
{
cout<<"BIODATA";
}
};

int main()
{
biodata b1;
b1.per::getdata();
b1.prof::getdata();
b1.acad::getdata();
b1.disp();
b1.per::display();
b1.prof::display();
b1.acad::display();
}

























