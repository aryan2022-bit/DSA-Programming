class Solution {
    public boolean lemonadeChange(int[] bills) {
        int fiveCnt = 0, tenCnt = 0;

        for(int i = 0; i < bills.length; i++){
            if(bills[i] == 5){
                fiveCnt++;
            }else if(bills[i] == 10){
                if(fiveCnt > 0){
                    fiveCnt--;
                    tenCnt++;
                }else{
                    return false;
                }
            }else{
                if(fiveCnt > 0 && tenCnt > 0){
                    fiveCnt--;
                    tenCnt--;
                }else if(fiveCnt >= 3){
                    fiveCnt = fiveCnt - 3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
}
