class Solution{
    public:
    int trappingWater(int arr[], int n){
        int prefix[n];
        int suffix[n];
        prefix[0]=arr[0];
        suffix[n-1]=arr[n-1];

        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(prefix[i],suffix[i])-arr[i];
        }
        return ans;
    }
};