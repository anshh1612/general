
class Solution {
public:
    int LCM(int n1, int n2) {
        int gcd = 1;

        for (int i = n1; i >= 1; i--) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
                break;
            }
        }

        int lcm = (n1 / gcd) * n2;
        return lcm;
    }
};
