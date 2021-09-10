class Solution{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        int i=0,j=0,sum=0;
        vector<int> ans;
        while(j<n){
            sum+=arr[j];
            if(sum<s)
                j++;
            else if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }    
            else{
                while(sum>s){
                    sum-=arr[i];
                    i++;
                }
                if(sum==s){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }    
                j++;
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};