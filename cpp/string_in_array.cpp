//wap to take a string in an array and print it
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[80];
	int i;
	cout<<"Enter your sentence: ";
	i = 0;
	while((arr[i]= getchar())!= '\n'){
		i++;
	arr[i] = '\0';
	i = 0;
}
	while(arr[i] != '\0'){
		cout << arr[i];
		i++;
		}
	}

