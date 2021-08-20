class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int> ans;
        for(int i=L;i<=R;i++){
           string s=to_string(i);
           set<int> uniqueDigit(s.begin(),s.end());
           if(s.size()==uniqueDigit.size())
                ans.push_back(i);
        }
        return ans;
    }
};