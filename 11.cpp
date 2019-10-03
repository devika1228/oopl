#include<iostream>
#include<deque>
#include<cstdlib>
using namespace  std;

int main()
{

	deque<int>dq;
	deque<int>::iterator itr;

int ch,a;
do
{
	cout<<"\n\n\tMENU";
	cout<<"\n\n\t1.push at front\n\n\t2.push at end\n\n\t3.pop at front\n\n\t4.pop at end\n\n\t5.display\n\n\t6.size\n\n\t7.exit";
	cout<<"\n\n\tenter your choice:";
	cin>>ch;


switch(ch)
{

	case 1:
	cout<<"\n\n\tinsert an element at front:";
	cin>>a;
	dq.push_front(a);

	break;

	case 2:
	cout<<"\n\n\tinsert an element at back:";
	cin>>a;
	dq.push_back(a);
	break;
	
	case 3:
	dq.pop_front();
	break;

	case 4:
	dq.pop_back();
	break;

	case 5:
	if(dq.empty())
	{
		cout<<"\n\n\tdeque is empty";
	}
	else
	{
		for(itr=dq.begin();itr!=dq.end();itr++)
		{	
			cout<<"\t";
			cout<<*itr;
			
		}
	}
	break;

	case 6:
	cout<<"\n\n\tthe size is:";
	dq.size();
	cout<<dq.size();
	break;

	case 7:
	exit(0);
	break;
	
}
}

while(ch!=10);

return 0;
}



