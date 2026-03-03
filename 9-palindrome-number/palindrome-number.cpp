class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long reverse=0;
        int digit;
        while (num>0)
        {
            digit = num%10;
            reverse = reverse*10 + digit;
            num = num/10;
        }
        if ((long)x==reverse) return true;
        else return false;
    }
};