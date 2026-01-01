class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        // Step 1 : Creating a difference Array
        int[] diff = new int[1001];

        // Step 2 : Marking pick-ups and drop-offs
        for(int i = 0; i < trips.length; i++){
            int passengers = trips[i][0];
            int from = trips[i][1];
            int to = trips[i][2];

            diff[from] = diff[from] + passengers;
            diff[to] = diff[to] - passengers;
        }

        // Step 3 : Running sum to check capacity
        int currPassengers = 0;
        for(int i = 0; i <= 1000; i++){
            currPassengers = currPassengers + diff[i];
            if(currPassengers > capacity) return false;
        }
        return true;
    }
}
