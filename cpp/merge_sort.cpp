#include <bits/stdc++.h>
using namespace std;

class Sol {
  public:
    void merge(vector<int> &arr, int left, int mid, int right){
        int n1 = mid - left +1;
        int n2 = right - mid;
        
        vector<int> leftarr(n1), rightarr(n2);
        
        for(int i=0; i<n1; i++){
           leftarr[i] = arr[left + i]; 
        }
        
        for(int j=0; j<n2; j++){
            rightarr[j] = arr[mid + 1 + j];
        }
        
        int i=0, j=0, k= left;
        while(i<n1 && j<n2){
            if(leftarr[i] < rightarr[j]){
                arr[k] = leftarr[i];
                i++;
            }
            else{
                arr[k] = rightarr[j];
                j++;
            }
            k++;
        }
        
        while(i<n1){
            arr[k] = leftarr[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k] = rightarr[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& arr, int left, int right) { //divides the array recursively
        
        if(left >= right) return;
        int mid = left + (right-left)/2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        
        merge(arr, left, mid, right);
    }
};

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    Sol obj;
    obj.mergeSort(arr,0 , n-1);
    
    cout<<"Sorted Array: ";
    for(int num: arr){
        cout << num <<" ";
    }

    return 0;
}
