class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int copy = x;
        int digit = 0;
        long long number = 0;
        while(copy > 0){
            digit = copy % 10;
            copy = copy / 10;
            number = number * 10 + digit;
        }
        if(number == x){
            return true;
        }
        else {
            return false;
        }
    }
};