class Solution {
public:
    long long MOD = 1e9 + 7;

    long long power(long long base, long long exp, long long mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp & 1) 
                result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2; // number of even-indexed positions
        long long oddCount = n / 2;        // number of odd-indexed positions

        long long ans = (power(5, evenCount, MOD) * power(4, oddCount, MOD)) % MOD;
        return (int) ans;
    }
};