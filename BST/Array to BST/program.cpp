class Solution {
public:
    void builtTree(vector<int>& nums,int start,int end,vector<int> &ans){
        
        if(start>end)
            return;
        int mid=(start+end)/2;
        ans.push_back(nums[mid]);
        
        builtTree(nums,start,mid-1,ans);
        builtTree(nums,mid+1,end,ans);
    
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
       vector<int> ans;
        builtTree(nums,0,nums.size()-1,ans);
       return ans;
    }
};