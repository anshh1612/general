class Solution {
public:
    int largestDigit(int n) {
        int d , l = 0;
        while(n>0){
            d = n%10;
            if(d>l) l=d ;
            n=n/10;
        }
        
    return l;
    }

};
