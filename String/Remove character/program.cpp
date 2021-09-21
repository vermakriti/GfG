class Solution {
  public:
    string removeChars(string string1, string string2) {
        string s="";
        map<char,int> mp;
        for(int i=0;i<string2.size();i++){
            mp[string2[i]]++;
        }
        for(int i=0;i<string1.size();i++){
            if(mp[string1[i]])
               continue;
            else s+=string1[i];    
        }
        return s;
    }
};
