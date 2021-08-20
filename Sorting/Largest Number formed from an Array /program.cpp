class Solution{
public:
	static int mycompare(string x,string y){
	    
	    string xy=x.append(y);
	    string yx = y.append(x);
	    
	    return (xy.compare(yx)>0) ? 1 : 0;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    
	    string s="";
	    sort(arr.begin(),arr.end(),mycompare);
	    
	    for(int i=0;i<arr.size();i++)
	        s+=arr[i];
	    return s; 
	}
};
