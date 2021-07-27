class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<string> st;
        string s="";
        for(int i=0;i<S.size();i++){
            if(S[i]!='.'){
                s+=S[i];
            }
            else {
                st.push(s);
                s.clear();
                s="";
            }
        }
        st.push(s);
        
        string ans="";
        while(!st.empty()){
            
            ans+=st.top();
            st.pop();
            ans+='.';
        }
        ans.pop_back();
        return ans;
    } 
};
