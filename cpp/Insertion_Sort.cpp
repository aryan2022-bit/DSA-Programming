#include <bits/stdc++.h>
using namespace std;
class Sol{
	public:
		void InsertionSort(vector <int> &arr){
			int n = arr.size();
			for(int i= 0; i<n; i++ ){
				int j = i;
				while(j>0 && arr[j-1] > arr[j]){
					swap(arr[j-1], arr[j]);
					j--;
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
	obj.InsertionSort(arr);
	
	cout<<"Sorted Array: ";
	for(int num : arr){
		cout<<num<<" ";
	}
}
