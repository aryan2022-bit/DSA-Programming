//RECURSIVE INSERTION SORT  

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector <int> arr;
        void insertionSort(vector<int> &arr, int i, int n){
            
            if(i >= n) return;
            
            int j = i;
            while(j > 0 && arr[j-1] > arr[j]) {
                swap(arr[j-1], arr[j]);
                j--;
            }
        insertionSort(arr, i+1, n);
    }
};
int main(){
    int k;
    cout<<"Enter the no. of elements: ";
    cin >> k;
    
    
    vector <int> arr(k);
    for(int i=0; i<k; i++){
        cin >> arr[i];
    }
    
    Solution ob;
    ob.insertionSort(arr, 0, k);
    
    cout<<"Sorted Array : ";
    for(int num : arr){
        cout<< num << " ";
    }
}
