class Solution{
    public:
        int countWords(string list[], int n){   
            int ans=0;
            map<string,int> mp;
            for(int i=0;i<n;i++)
                mp[list[i]]++;
            for(auto i:mp)
                if(i.second==2)
                    ans++;
            return ans;        
        }

};
