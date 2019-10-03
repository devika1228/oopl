#include<iostream>
#include<stack>
#include<queue>
#include<cstdlib>
using namespace std;

int main()
{
	int ch,key;
stack<int>s1;

queue<int>q1;



do
{
	cout<<"\n\n\tstack n queue implementation.";
	cout<<"\n\n\tMENU";
	cout<<"\n\n\t1.insert in stack  n queue\n\n\t2.delete from stack n queue\n\n\t3.size of stack n queue\n\n\t4.first element of stack n queue\n\n\t5.display stack n queue\n\n\t6.exit";
	cout<<"\n\n\tenter your choice:";
	cin>>ch;

switch(ch)
{

	case 1:
		cout<<"\n\n\tenter some data:";
		cin>>key;
		s1.push(key);
		q1.push(key);
		break;

	case 2:
		//cout<<"\n\n\tthe element to be deleted in";
		s1.top();
		cout<<"\n\n\tthe element to be deleted in stack is:"<<s1.top();
		s1.pop();

		q1.front();
		cout<<"\n\n\tthe element to be deleted in queue is:"<<q1.front();
		q1.pop();
		break;

	case 3:
		cout<<"\n\n\tthe size of the stack is:";
		s1.size();
		cout<<s1.size();
		cout<<"\n\n\tthe size of the queue is:";
		q1.size();
		cout<<q1.size();
		break;

	case 4:
		s1.top();
		cout<<"\n\n\tthe first element in stack is:"<<s1.top();
		q1.front();
		cout<<"\n\n\tthe first element in queue is:"<<q1.front();
		break;

	case 5:
		while(!s1.empty()||!q1.empty())
		{
			
			cout<<"\n\n\tthe elememts of stack are:";
			s1.top();
			cout<<s1.top();
			s1.pop();

			
			cout<<"\n\n\tthe elements of queue are:";
			q1.front();
			cout<<q1.front();
			q1.pop();
		}
		break;

	case 6:
		exit(0);
		break;
}
}while(ch!=10);

return 0;
}
