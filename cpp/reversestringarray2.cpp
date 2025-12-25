#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char *p, *q, temp, arr[100];
	
	cout<<"Enter your string: ";
	cin.getline(arr,100);
	
	p = arr;
	q = arr + strlen(arr)-1;
	
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
		
		p++;
		q--;
	}
	
	cout<<"Reversed string array: "<<arr;
}
