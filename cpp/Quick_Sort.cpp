#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high){
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex-1);
            quickSort(arr, pIndex+1, high);
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int i = low;
        int j = high;
        int pivot = arr[low];
        
        while(i<j){
            while(arr[i] <= pivot && i < high){
                i++;
            }
            while(arr[j] > pivot && j > low){
                j--;
            }
            if(i<j){
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[low], arr[j]);
        return j;
    }
};
int main()
{
    int k;
    cout<<"Enter the size of array : ";
    cin >> k;
    
    vector <int> arr(k);
    for(int i=0; i<k; i++){
        cin>> arr[i];
    }
    
    Solution obj;
    obj.quickSort(arr, 0, k-1);
    
    cout<<"Sorted Array : ";
    for(int num : arr){
        cout<<num << " ";
    }

    return 0;
}
