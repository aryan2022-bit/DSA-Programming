class Solution {
    public int leastInterval(char[] tasks, int n) {
        // Step 1 : Count of all Frequencies
        int[] freq = new int[26];
        for(char c : tasks){
            freq[c - 'A']++;
        }

        // Step 2 : Finding Max Frequency
        int maxFreq = 0;
        for(int f : freq){
            maxFreq = Math.max(maxFreq, f);
        }

        // Step 3 : Count total no. of Max Frequencies
        int maxCount = 0;
        for(int f : freq){
            if(f == maxFreq){
                maxCount++;
            }
        }

        // Step 4 : minIntervals calculation
        int partCount = maxFreq - 1;
        int partLen = n + 1;
        int minIntervals = partCount * partLen + maxCount;

        // Step 5 : Return the max of tasks.length or minIntervals
        return Math.max(tasks.length, minIntervals);
    }
}
