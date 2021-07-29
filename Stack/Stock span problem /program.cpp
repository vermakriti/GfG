class Solution{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>> st;
       vector<int> temp(n);
       vector<int> ans(n);
       for(int i=n-1;i>=0;i--){
           while(!st.empty() && st.top().first<price[i]){
               temp[st.top().second]=i;
               st.pop();
           }
           st.push({price[i],i});
       }
       while(!st.empty()){
            temp[st.top().second]=-1;
            st.pop();
       }
       for(int i=0;i<n;i++){
            if(temp[i]==-1)
                ans[i]=i+1;
            else ans[i]=i-temp[i];    
       }
       return ans;
       
    }
};