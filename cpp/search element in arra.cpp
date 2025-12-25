//wap to search an element in an array & point the location at which element found using pointer
#include <iostream>
using namespace std;
int main(){
	int arr[100], size, *p, s;
	
	cout<<"Enter the no. of elements in array : ";
	cin >> size;
	
	cout<<"Enter the elements of array: ";
	for(int i=0; i<size; i++){
		cin>> arr[i];
	}
	
	cout<<"Enter the value you want to search from array: ";
	cin >> s;
	*p = s;
	
	while(arr[i]!= s){
		i++;
	}
	
	cout<< p;
}
