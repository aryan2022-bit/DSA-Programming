class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1;

        while(left < right){
            char temp = s[left];       //Store s[left] in temp
            s[left] = s[right];   //Assign s[right] to s[left]
            s[right] = temp;      //Assign temp to s[right]
            
            left++;
            right--;
        }
    }
};
