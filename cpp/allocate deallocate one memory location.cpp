#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int*p=NULL;
	p=new int;
	/*if(!p)
	{
	cout<<*\n Memory allocation failure";
	exit(1);
}*/
if(p==NULL)
{
	cout<<"\n Memory allocation failure";
	exit(1);
}
else
{
	cout<<"\nMemory allocated";
	*p=12;
	cout<<"Integer value stored is:"<<*p;
	delete p;//Dellocation of memory 
	cout<<"\n Memory allocated";
}
return 0;
}
