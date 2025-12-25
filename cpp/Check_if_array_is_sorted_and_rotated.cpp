// 1752. Check if Array Is Sorted and Rotated

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool check(vector <int> nums){
            int n = nums.size();
            int dropCount = 0;
            
            for(int i = 0; i<n ; i++){
                if(nums[i] > nums[(i+1)%n]){
                    dropCount++;
                }
                
                if(dropCount > 1){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int k;
    cout <<"Enter size of your array : ";
    cin >> k;
    
    vector <int> arr(k);
    cout<<"Enter the elements : ";
    for(int j=0; j<k; j++){
        cin >> arr[j];
    }
    
    Solution obj;
    bool result = obj.check(arr);
    
    if(result){
        cout<<"The array is a rotated sorted array.";
    }else{
        cout<<"The array is not a rotated sorted array.";
    }
    
    return 0;
}
