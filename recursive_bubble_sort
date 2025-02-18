//RECURSIVE BUBBLE SORT  

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector <int> arr;
        void bubbleSort(vector<int> &arr, int n){
    
            if(n==1) return;
    
            for(int j=0; j<n-1; j++){
                if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            }
    
        bubbleSort(arr, n-1);
    }
};
int main(){
    int k;
    cout<<"Enter the no. of elements: ";
    cin >> k;
    
    // vector <int> arr(k);
    arr = new int[k];
    for(int i=0; i<k; i++){
        cin >> arr[i];
    }
    
    Solution ob;
    ob.bubbleSort(arr, k);
    
    cout<<"Sorted Array : ";
    for(int num : arr){
        cout<< num << " ";
    }
}
