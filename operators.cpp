#include<iostream>
using namespace std;
int main()
{
	int operation;
	float a, b;
	cout<<"press 1 for addition \n";

	cout<<"press 2 for substraction \n";

	cout<<"press 3 for multiplication \n";

	cout<<"press 4 for division \n";
	cin>>operation;
	cout<<"now enter the 2 integers";
	cin>>a>>b;
	switch(operation)
	{
		case 1:
		cout<<"the addition result is :"<<a+b;
		break;
		case 2:
		cout<<"the substraction result is :"<<a-b;
		break;
		case 3:
		cout<<"the multiplication result is :"<<a*b;
		break;
		case 4:
		cout<<"the division result is :"<<a/b;
		break;
	}
	return 0;
}
