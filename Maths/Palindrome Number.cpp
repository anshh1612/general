class Solution {
public:
    bool isPalindrome(int n) {
        int ch = n;
        int nn =0;
        while(n>0){
            int a = n%10;
            nn = (nn*10)+a;
            n = n/10;
        }
        if (ch==nn) return true ;
        else return false;
        

    }
    
};
