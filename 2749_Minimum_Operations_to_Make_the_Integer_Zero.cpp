class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long target = 1LL * num1 - 1LL * k * num2; 
            if (target < 0) continue; 
            
            int bits = __builtin_popcountll(target); 
            if (bits <= k && k <= target) {
                return k; 
            }
        }
        return -1; 
    }
};
