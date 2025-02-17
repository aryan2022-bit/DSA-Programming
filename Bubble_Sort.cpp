#include <bits/stdc++.h>
using namespace std;
class Sol{
	public:
		void BubbleSort(vector <int> &arr){
			int n = arr.size();
			for(int i= n-1; i>=1; i-- ){
				for(int j=0; j<i; j++){
					if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
				}
			}
		}
};
int main(){
	int s;
	cout<<"Enter the size of array: ";
	cin >> s;
	
	cout<<"Enter the elements: ";
	vector <int> arr(s);
	for(int k=0; k<s; k++){
		cin>> arr[k];
	}
	
	Sol obj;
	obj.BubbleSort(arr);
	
	cout<<"Sorted Array: ";
	for(int num : arr){
		cout<<num<<" ";
	}
}
