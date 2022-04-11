#include <iostream>
using namespace std;
inline int area(int l,int w)
{
	return(l*w);
}

inline int peri(int l,int w)
{
	return 2(l*w);
}
int main()
{
	int l,w;
	cout<<"enter the value of length";
    cin>>l;
	cout<<"enter the value of width";
	cin>>w;
	cout<<"area  of rectangle:"<<area(l,w)<<"\n";

	cout<<"area  of perimeter:"<<peri(l,w)
return 0;
}