#include<bits/stdc++.h>
using namespace std;
class Sol{
	public :
		void SelectionSort(vector <int> &arr){
			int n = arr.size();
			for(int i=0; i<n-1; i++){
				int min = i;
				for(int j = i+1; j<n; j++){
					if(arr[j] < arr[min]) min = j;
				}
				swap(arr[min], arr[i]);
			}
		}
};
int main(){
	int s;
	cout<<"Enter size of array: ";
	cin >> s;
	
	cout<<"Enter the elements: ";
	vector <int> arr(s);
	for(int k=0; k<s; k++){
		cin >> arr[k];
	}
	
	Sol obj;
	obj.SelectionSort(arr);
	
	cout<<"Sorted Array:";
	for(int num : arr){
		cout<< num << " ";
	}
	
}
