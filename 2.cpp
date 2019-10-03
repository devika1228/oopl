#include<iostream>
using namespace std;
class cpparray
{
public:
int n,a[50],i,b[50];
int read();
int print();
int range();
int assign();
int size();

};

int cpparray::read()
{
cout<<"\n\n\t*enter the range:";
cin>>n;
cout<<"\n\n\t*enter the element\n";
for(i=0;i<n;i++)
{
cout<<"\na["<<i<<"]=";
cin>>a[i];
}
}

int cpparray::print()
{
cout<<"\n\n\t*the element of array\n";
for(i=0;i<n;i++)
{
cout<<"\na["<<i<<"]=";
cout<<a[i];
}
}

int cpparray::range()
{
cout<<"\n\n\t*the range of the array:\t"<<a[0]<<"\tto\t"<<a[n-1];
}

int cpparray::assign()
{
cout<<"\n\n\t*array";
for(i=0;i<n;i++)
{
b[i]=a[i];
cout<<"\n\n\tb["<<i<<"]="<<b[i];
}
}
int cpparray::size()
{
cout<<"\n\n\t*the array size="<<n;
cout<<"\n\n\t";
}


int main()
{
cpparray obj1;
obj1.read();
obj1.print();
obj1.range();
obj1.assign();
obj1.size();

return 0;
}
