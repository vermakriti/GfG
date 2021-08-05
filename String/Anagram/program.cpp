class Solution{
    public:
    bool isAnagram(string a, string b){
        if(a.size()!=b.size())
            return false;
        map<int,int> mp;    
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
            mp[b[i]]--;
        }    
        for(auto i:mp){
            if(i.second)
                return false;
        }
        return true;
    }
};