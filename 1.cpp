//calculator
#include<iostream>
using namespace std;

class calc
{
public:
int a,b,c;
char op;
int get()
{
cout<<"enter a op b\n";
cin>>a>>op>>b ;
}

int add()
{
c=a+b;
}

int sub()
{
c=a-b;
}

int multi()
{
c=a*b;
}

int div()
{
c=a/b;
}

int xyz()
{
switch(op)
{

case'+':add();
cout<<"the answer:"<<c;
break;

case'-':sub();
cout<<"the answer:"<<c;
break;

case'*':multi();
cout<<"the answer:"<<c;
break;

case'/':
if(b==0)
{
cout<<"error\n";
}
else
{
div();
cout<<"the answer:"<<c;
}
break;
}
//cout<<"the answer:"<<c;
}
};

int main()
{
calc c2;
char ch;H:

c2.get();
c2.xyz();

cout<<"\ndo you want to continue (y/n)\n";
cin>>ch;
if(ch=='y')
{
goto H;
}

return 0;

}
