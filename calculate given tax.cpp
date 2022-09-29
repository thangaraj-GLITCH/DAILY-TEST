#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the income";
	cin>>a;
	if(a>0)
	{
		if(a<=150000)
		cout<<"no tax";
		else if(a>=150001 and a<=300000)
		cout<<"tax="<<a*0.1;
		else if(a>=300001 and a<=500000)
		cout<<"tax="<<a*0.2;
		else if(a>=500000)
		cout<<"tax="<<a*0.3;
	}
	else
	cout<<"Ivaild input";
}
