#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s[20];
	ifstream inf ("result.txt");
	getline(inf,s);
	inf.close();
	cout<<s;
}
