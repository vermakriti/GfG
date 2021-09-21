class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        long one=0,ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1')
                one++;
        }
        for(long i=1;i<one;i++)
            ans+=i;
        return ans;    
        
    }

};