#include<iostream>
using namespace std;
const int pi=3.14159;
/* Finds circumference of circle*/
inline float circum(float x)
	{ 
		return(2*pi*x);
	}
/* Finds area of circle*/
inline float area(float x)
	{ 
		return(pi*x*x);
	}
int main()
{
float r;
cout<<"Enter the radius of the circle:";
cin>>r;
cout<<endl<<"Circumference:"<<circum(r);
cout<<endl<<"Area :"<<area(r);
return 0;
}