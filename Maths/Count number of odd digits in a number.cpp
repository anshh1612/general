class Solution {
public:
    int countOddDigit(int n) {
        int odd = 0;
        while(n>0){
            int c = n%10;
            if (c%2==1)odd++;
            n = n/10;
        }
        return odd;

    }
};
