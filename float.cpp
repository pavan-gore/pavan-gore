#include <iostream>
using namespace std;
int main()
{
	float *p;
	int i,n;
	cout<<"\n enter the value of n:-";
	cin>>n;
	p=((float *)malloc(n*sizeof(float)));
	for(i=0;i<n;i++)
	{
		cin>>p[i];

	}
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<p[i];
	}
	cout<<"\n alternate array is :-";
	for(i=0;i<n;i+=2)
	{
		cout<<"\n"<<p[i];
	}
	return 0;
}