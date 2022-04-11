#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char c='A';
	int n=5;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(c=='z')
			break;

		
			cout<<c;
			c++;
		}
		cout<<endl;
	}
	return 0;
}