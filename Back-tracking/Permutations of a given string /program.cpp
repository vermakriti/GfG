class Solution{
	public:
    void permutation(int i,string s,vector<string> &ans){
        
        if(i==s.size()){     
            ans.push_back(s);
            return;
        }     
        for(int idx=i;idx<s.size();idx++){
            swap(s[i],s[idx]);
            permutation(i+1,s,ans);
            swap(s[i],s[idx]);
        }
    }
	vector<string>find_permutation(string S)
	{
	   vector<string> ans;
	   permutation(0,S,ans);
	   sort(ans.begin(),ans.end());
	   return ans;
	}
};