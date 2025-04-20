#include<iostream>
using namespace std;
union Data
{
	int intvalue;
	char charvalue;
	double doublevalue;
};
int main()
{
	const int SIZE=5;
	Data dataArray[SIZE];
	dataArray[0].intvalue=42;
	dataArray[1].charvalue='A';
	dataArray[2].doublevalue=3.14;
	dataArray[3].intvalue=100;
	dataArray[4].charvalue='Z';
	cout<<"Array of union: "<<endl;
	for(int i=0;i<SIZE;i++)
{
	cout<<"Index"<<i<<":";
	if(i%3==0)
	{
		cout<<"integer value:"<<dataArray[i].intvalue<<endl;
	}
	if(i%3==1)
	{
		cout<<"character value:"<<dataArray[i].charvalue<<endl;
	}
	else
	{
		cout<<"double value:"<<dataArray[i].doublevalue<<endl;
	}
}
	
}
