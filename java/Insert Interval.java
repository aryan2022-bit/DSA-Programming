class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> res = new ArrayList<>();

        for(int i = 0; i < intervals.length; i++){
            if (newInterval[1] < intervals[i][0]){
                res.add(newInterval);

                for(int j = i; j < intervals.length; j++){
                    res.add(intervals[j]);
                }

                int[][] ans = new int[res.size()][2];
                for(int k = 0; k < res.size(); k++){
                    ans[k] = res.get(k);
                }
                return ans;
            }else if (newInterval[0] > intervals[i][1]){
                res.add(intervals[i]);
            }else{
                newInterval = new int[]{
                    Math.min(newInterval[0], intervals[i][0]),
                    Math.max(newInterval[1], intervals[i][1])
                };
            }
        }
        res.add(newInterval);

        int[][] ans = new int[res.size()][2];
        for(int i = 0; i < res.size(); i++){
            ans[i] = res.get(i);
        }

        return ans;
    }
}
