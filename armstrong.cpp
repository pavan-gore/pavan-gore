#include<iostream>
using namespace std;
int main()
{
	int num,result,sum=0,temp;
	cout<<"enter the number";
	cin>>num;
	temp=num;
	while(num>0)
	{
		result=num%10;
		sum=sum+result*result*result;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"number is armstrong";
	}
	else
	{
		cout<<"number is not armstrong";
	}
	return 0;
}