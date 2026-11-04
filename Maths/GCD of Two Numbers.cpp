class Solution {
public:
    int GCD(int n1,int n2) {
        for (int i = n1 ; i>=1 ; i--){
            if (n1%i==0 && n2%i==0){
                return i ;
                break;
            }
        }
    }
};
