#include<iostream>
using namespace std;
int main()
{
	int n,table;
	cout<<"enter the integer number";
	cin>>n;
	cout<<"table of"<<n<<"\n";
	for( int i=1;i<=10;i++)
	{   
		table=n*i;
		cout<<table<<"\n";
	}
	
	 return 0;
}