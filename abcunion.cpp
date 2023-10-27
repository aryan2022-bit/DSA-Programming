#include<iostream>
using namespace std;
struct student{
    int a;
    char name[20];	
};
union papa{
	int a; 
	char name[20];
};
int main()
{
	cout<<sizeof(student)<<"bytes"<<"\n";
	cout<<sizeof(papa)<<"bytes";
}

