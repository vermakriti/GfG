// using hashing TC=O(M+N) SC=O(M)
class SOlution{
	public:
	vector<long long> findMissing(long long A[], long long B[],int N, int M) { 
	    
	    map<long long,long long> mp;
	    vector<long long> v;
	    for(int i=0;i<M;i++)
	        mp[B[i]]++;
	    for(int i=0;i<N;i++){
	        if(mp.find(A[i])==mp.end())
	            v.push_back(A[i]);
	    }   
	    return v;
	} 
};

//  