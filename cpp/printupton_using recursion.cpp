#include <iostream>
using namespace std;
void printnos(int n){
	if(n==0) return;
	
	printnos(n-1);
	cout<<n<<" ";
}
int main(){
	int k;
	cout<<"Enter the no. upto be printed : ";
	cin>>k;
	printnos(k);
}
