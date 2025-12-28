class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int totalGas = 0, totalCost = 0;

        for(int i = 0; i < gas.length; i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }

        if(totalGas < totalCost) return -1;

        int total = 0, start = 0;

        for(int j = 0; j < cost.length; j++){
            total += gas[j] - cost[j];
            if(total < 0){
                total = 0;
                start = j+1;
            }
        }
        return start;
    }
}
