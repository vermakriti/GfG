class Solution{
	public:	
	string removeDups(string S) 
	{
	   map<int,int> mp;
	   string s="";
	   for(int i=0;i<S.size();i++){
	        if(mp.find(S[i])==mp.end())
	            mp[S[i]]++;
	   }     
	   for(int i=0;i<S.size();i++){
	       if(mp[S[i]]==1){
	           s+=S[i];
	           mp[S[i]]--;
	       }
	   }
	   return s;
	}
};
