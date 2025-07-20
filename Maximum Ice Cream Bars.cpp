class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> count(100001, 0);

        //step1  : freq calc
        for(int c : costs){
            count[c]++;
        }

        int iceCreams = 0;

        //step2 : buy ice creams for cheapest to costliest
        for(int cost = 1; cost <= 100000; cost++){
            if(count[cost] == 0) continue; //no bars at particular cost

            //how many can we buy
            int maxCanBuy = min(count[cost], coins/cost);
            iceCreams = iceCreams + maxCanBuy;
            coins = coins - maxCanBuy*cost;

            if(coins < cost) break;
        }
        return iceCreams;
    }
};
