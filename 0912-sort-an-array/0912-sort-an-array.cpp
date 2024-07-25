
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int ,int> mp;
        for(auto i:nums){
            mp[i]++;
        }


        int min1=*min_element(nums.begin(),nums.end());
        int max1=*max_element(nums.begin(),nums.end());
        int i=0;
        for(int num=min1;num<=max1;num++){
            while(mp[num]>0){
                nums[i]=num;
                i++;
                mp[num]--;
            }
        }
return nums;

    }
};
