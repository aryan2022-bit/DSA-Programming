class Solution {
    public List<Integer> partitionLabels(String s) {
        int[] last = new int[26];
        ArrayList<Integer> res = new ArrayList<>();

        // Calculating the last occurence of each character
        for(int i = 0; i < s.length(); i++){
            last[s.charAt(i) - 'a'] = i;
        }

        int start = 0, end = 0;

        // Making partition labels
        for(int j = 0; j < s.length(); j++){
            end = Math.max(end, last[s.charAt(j) - 'a']);

            if(j == end){
                res.add(end - start + 1);
                start = j + 1;
            }
        }

        return res;
    }
}
