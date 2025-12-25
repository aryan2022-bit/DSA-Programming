class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        using T = pair<int, pair<int, int>>;
        priority_queue<T, vector<T>, greater<T>> pq;

        //Step 1: Pushing first element of every row to priority_queue
        for(int i = 0; i < n; i++){
            pq.push({matrix[i][0], {i, 0}});
        }

        //Step 2: Popping and traversing through columns to find the Kth element
        while(k > 1){
            auto curr = pq.top(); pq.pop();
            int row = curr.second.first;
            int col = curr.second.second;

            //Step 3: Push next column if that exists
            if(col + 1 < n){
                pq.push({matrix[row][col + 1], {row, col + 1}});
            }

            k--; //decrement k
        }

        //Step 4: Return the top element which will be Kth element in our Sorted Matrix
        return pq.top().first;
    }
};
