class Solution{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0;i<x.size();i++){
            if(x[i]=='(')
                st.push('(');
            else if(x[i]=='{')
                st.push('{');
            else if(x[i]=='[')
                st.push('[');
            else{
                if(st.empty())
                    return false;
                if(x[i]==')' && st.top()=='(')
                    st.pop();
                else if(x[i]=='}' && st.top()=='{')
                    st.pop();    
                else if(x[i]==']' && st.top()=='[')
                    st.pop();   
                else return false;    
            }    
        }
        if(st.empty())
            return true;
        else return false;    
    }

};
