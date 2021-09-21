class Solution{
public:	
	
	string firstAlphabet(string S){
	    string s;
	    s.push_back(S[0]);
	    for(int i=1;i<S.size();i++){
	        if(S[i]==' ')
	            s.push_back(S[i+1]);
	    }
	    return s;
	}
};
