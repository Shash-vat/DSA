class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(temp[i])==mpp.end()){
                mpp[temp[i]]=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(mpp[nums[i]]);
        }
        return ans ;
        

    }
};
//Time complexity = O(n)
//Space complexity = O(n)
