class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int sum=0;
        for(int i=0;i<K;i++)
            sum+=Arr[i];
        int ans=INT_MIN;
        
        int i=0,j=K;
        while(j<N){
            
            ans=max(sum,ans);
            sum-=Arr[i];
            i++;
            sum+=Arr[j];
            j++;
        }
        ans=max(sum,ans);
        return ans;
    }
};