class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int, int>> newarr;
        for(int i=0; i<nums.size(); i++){
            newarr.push_back({nums[i], i});
        }
        sort(newarr.begin(), newarr.end());
        int i=0,j=newarr.size()-1;
        while(i<j){
            int sum = newarr[i].first+newarr[j].first;
            if(sum==target) return {newarr[i].second, newarr[j].second};
            else if(sum<target) i++;
            else j--;
        }
        return{0,0};
    }
};