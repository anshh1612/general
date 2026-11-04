class Solution {
public:
    int reverseNumber(int n) {
        int nn =0;
        while(n>0){
            int a = n%10;
            nn = (nn*10)+a;
            n = n/10;
        }
        return nn;

    }
};
