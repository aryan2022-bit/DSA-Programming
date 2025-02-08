//WAP to store 20 prime numbers in an array using pointers
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int arr[40],*p,i,n,flag;
	n=2;
	for(p=arr;p<arr+20;p++){
		flag=0;
		while(flag==0){
			i=2;
			while(i<=n/2&& n%i!=0)
				i++;
			if(i>n/2)
			{
				*p=n;
				n++;
				flag=1;
			}
			else
			{
				n++;
				flag=0;
			}
		}
	}
	for(p=arr;p<arr+20;p++)
		cout<<"Prime numbers are: "<<*p <<endl;
	
	
	return 0;

