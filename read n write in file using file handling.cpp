#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int n=80;
	char s[n];
	
	ofstream fout;
	ifstream fin;
	fout.open("country.txt");
	fout<<"India"<<endl;
	fout<<"USA"<<endl;
	fout<<"UK"<<endl;
	fout.close();
	
	fout.open("capital.txt");
	fout<<"Delhi"<<endl;
	fout<<"Washington"<<endl;
	fout<<"London"<<endl;
	fout.close();
	//reading Data from file
	fin.open("country.txt");
	while(fin)
	{
		fin.getline(s,n);
		cout<<s<<endl;
	}
	fin.close();
	fin.open("capital.txt");
	while(fin)
	{
		fin.getline(s,n);
		cout<<s<<endl;
	}
	fin.close();

}
