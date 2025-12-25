#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        // Total flowers needed = m bouquets * k flowers per bouquet
        long long totalFlowers = (long long)m * k;
        
        // If not enough flowers in the garden, it's impossible
        if (totalFlowers > bloomDay.size()) return -1;

        // Binary search between the minimum and maximum bloom days
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int flowers = 0;    // Count of consecutive bloomed flowers
            int bouquets = 0;   // Count of bouquets formed

            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    flowers++;  // This flower has bloomed
                    if (flowers == k) {
                        bouquets++;     // Made one bouquet
                        flowers = 0;    // Reset for next bouquet
                    }
                } else {
                    flowers = 0; // Bloom not reached → break adjacency
                }
            }

            // If we can make enough bouquets, try to find a smaller day
            if (bouquets >= m) {
                result = mid;
                high = mid - 1;
            } else {
                // Not enough bouquets → wait more days
                low = mid + 1;
            }
        }

        return result;
    }
};
