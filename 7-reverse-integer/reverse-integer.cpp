class Solution {
public:
    int reverse(int x) {
        long num = (long)x;
        int flag = 0;
        if(num<0)
        {
            flag=1;
            num*=-1;
        }
        long reverse=0;
        int digit;
        while (num>0)
        {
            digit = num%10;
            reverse = reverse*10 + digit;
            num = num/10;
        }
        
        int check1 = (int)reverse;
        long check2 = (long)check1;
        
        if(reverse == check2)
        {
            if(flag==1) return reverse*(-1);
            return reverse;
        }
        return 0;
    }
};