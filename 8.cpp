#include<iostream>
using namespace std;
template<typename T>
T selection(T a[],int n )
{
int i,j;
for(j=0;j<n;j++)
{
int imin=j;
for(i=j+1;i<n;i++)
{
if(a[i]<a[imin])
{
imin=i;
}
}

if(imin!=j)
{
swap(a[j],a[imin]);
}
}
}
int main()
{
int a[5],i,n;float b[5];
cout<<"enter the limit";
cin>>n;
cout<<"\n\n\tenter elements of integer array\n\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
selection<int>(a,n);
cout<<"\n\n\tsorted elements of integer array are";
for(i=0;i<n;i++)
{
cout<<"\n"<<a[i];
}




cout<<"\n\n\tenter elements of float array\n\n";
for(i=0;i<n;i++)
{
cin>>b[i];
}
selection<float>(b,n);
cout<<"\n\n\tsorted elements of float array are";
for(i=0;i<n;i++)
cout<<"\n"<<b[i];
return 0;
}



