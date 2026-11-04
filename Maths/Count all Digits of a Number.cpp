class Solution {
public:
    int countDigit(int n) {
        int c = 0;

        if (n == 0) {
            return 1;
        }

        while (n > 0) {
            c++;
            n = n / 10;
        }

        return c;
    }
};
