class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> next_smaller_right(n),next_smaller_left(n);
        stack<pair<long long,long long>> st;
        
        for(int i=0;i<n;i++){
            
            if(st.empty()){
                st.push({arr[i],i});
            }
            while(!st.empty() && st.top().first>arr[i]){
                next_smaller_right[st.top().second]=i;
                st.pop();
            }
            st.push({arr[i],i});
        }
        while(!st.empty()){
            next_smaller_right[st.top().second]=n;
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            
            if(st.empty()){
                st.push({arr[i],i});
            }
            
            while(!st.empty() && st.top().first>arr[i]){
                next_smaller_left[st.top().second]=i;
                st.pop();
            }
            st.push({arr[i],i});
        }
        while(!st.empty()){
            next_smaller_left[st.top().second]=-1;
            st.pop();
        }
        long long ans=INT_MIN;
        for(int i=0;i<n;i++){
            
            ans=max(ans,arr[i]*(next_smaller_right[i]-next_smaller_left[i]-1));
        }
        return ans;
    }
};