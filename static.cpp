#include<iostream>
using namespace std;
class product
{
	int id;
	static int c;
public:
	void getdata()
	{
      cin>>id;
      c++;
	}
	void display()
	{
		cout<<id;
	}
	static void count()
	{
		cout<<c;
	}
};
int product::c;
int main()
{
	product p1,p2,p3;
	p1.getdata();
	p1.display();
	p2.getdata();
	p2.display();
	product::count();
	return 0;
}