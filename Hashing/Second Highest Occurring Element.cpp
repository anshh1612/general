class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int hash[100001] = {0};

        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        int max1 = 0, max2 = 0;
        int ele1 = -1, ele2 = -1;

        for(int i = 0; i < 100001; i++) {

            if(hash[i] > max1) {
                max2 = max1;
                ele2 = ele1;

                max1 = hash[i];
                ele1 = i;
            }

            else if(hash[i] > max2 && hash[i] < max1) {
                max2 = hash[i];
                ele2 = i;
            }
        }

        return ele2;
    }
};
