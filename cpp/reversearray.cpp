//wap to reverse an array element
#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int size;
	
	cout<<"Enter the no. of elements of array: ";
	cin >> size;
	
	cout<<"Enter the elements of the array: ";
	for(int i =0; i<size; i++){
		cin >> arr[i];
	}
	
	int start = 0;
	int end = size-1;
	
	while(start!=end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
	
	cout<<"Reversed array: ";
	for(int i=0; i<size; i++){
		cout <<arr[i]<<" ";
	}
}
