class Solution{
	public:
		string FirstNonRepeating(string A){
		   queue<char> q;
		   unordered_map<char,int> mp;
		   string s="";
		   
		   for(int i=0;i<A.size();i++){
		       mp[A[i]]++;
		       q.push(A[i]);
		       while(!q.empty()){
		           if(mp[q.front()]>1)
		                q.pop();
		            else{
		                s+=q.front();
		                break;
		            }          
		       }
		       if(q.empty())
		            s+='#';
		   }
		   return s;
		}
};