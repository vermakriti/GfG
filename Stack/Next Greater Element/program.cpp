class Solution{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<pair<long long,int>> st;
        vector<long long> ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first<arr[i]){
                ans[st.top().second]=arr[i];
                st.pop();
            }
            st.push({arr[i],i});
        }
        while(!st.empty()){
            ans[st.top().second]=-1;
            st.pop();
        }
        return ans;
    }
};
