#include<iostream>
using namespace std;
int main()
{
	int i,n,a=0,b=1,c;
	cout<<"enter the number";
	cin>>n;
	if(n==0)
		{
			cout<<a;

		}
		else{
			cout<<a<<b;
			for(i=3;i<=n;i++)
			{   c=a+b;
				cout<<c;
				a=b;
				b=c;

			}
		}
		return 0;


}