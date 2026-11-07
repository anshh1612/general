class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int hash[100001]={0};
        for(int i = 0 ; i<nums.size() ; i++){
            hash[nums[i]] += 1;
        }

        int max=0;
        int ele=-1;

        for(int i = 0;i<100001;i++){
            if (hash[i]>max){
                max = hash[i];
                ele = i;
            }
        }

         return ele;         

    }
};
