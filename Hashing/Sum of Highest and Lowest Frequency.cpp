class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int hash[100001]={0};
        for(int i = 0 ; i<nums.size() ; i++){
            hash[nums[i]] += 1;
        }

        int max=0;
        int min =nums.size();

        for(int i = 0;i<100001;i++){
            if (hash[i]>0){

                if(hash[i]>max) max=hash[i];
                if(hash[i]<min) min=hash[i];
            }
        }
        reurn min + max;
  
    }
};
