 class Solutuion{
 public:
    string Reduced_String(int k,string s){
        
        if(k==1)return "";
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push({s[i],1});
                continue;
            }
            if(st.top().first==s[i]){
                st.push({s[i],st.top().second+1});
                if(st.top().second==k){
                    int i=0;
                    while(i<k){
                        st.pop();
                        i++;
                    }    
                }
            }
            else{
                st.push({s[i],1});
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top().first;
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};