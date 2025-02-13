#include <iostream>
#include <vector>
using namespace std;

class Sol{
	public:
		void reverseArr(vector <int> &arr){
			reverseArrHelper(arr, 0, arr.size()/2);
		}
	private:
		void reverseArrHelper(vector <int> &arr, int left, int n){
			if(left >= n) return;
			
			swap(arr[left], arr[arr.size()-left-1]);
			
			reverseArrHelper(arr, left+1, n);
		}
};
int main(){
	int k;
	cout<<"Enter the length of arr: ";
	cin>> k;
	
	vector <int> arr(k);
	cout<<"Enter the "<<k<<" elements: ";
	for(int i=0; i<k; i++){
		cin>> arr[i];
	}
	
	Sol obj;
	obj.reverseArr(arr);
	
	cout<<"Reversed array: ";
	for(int num: arr){
		cout<<num<<" ";
	}
	cout<<endl;
}
