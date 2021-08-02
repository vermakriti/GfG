class Solution{
    public:
    string reverseWords(string S) 
    { 
        string s="",output="";
        stack<string> st;
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                st.push(s);
                st.push(".");
                s.clear();
                s="";
            }
            else{
                s+=S[i];
            }
        }
        st.push(s);
        while(!st.empty()){
            output+=st.top();
            st.pop();
        }
        return output;
    } 
};