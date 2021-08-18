class TrieNode{
    vector<TrieNode*>children;
    bool end;
    int count;
    public :
    
    TrieNode():children(26){
        end=true;
        count=0;
        for(int i=0;i<26;i++)
            children[i]=nullptr;
    }
    TrieNode*get(int i){
        return children[i];
    }
    void put(int i,TrieNode*node){
        children[i]=node;
    }
    void setEnd(){
        end=true;
    }
    bool getEnd(){
        return end;
    }
    void setCount(){
        count=count+1;
    }
    int getCount(){
        return count;
    }
};

class Solution
{
    TrieNode*root;
    public:
    Solution(){
        root=new TrieNode();
    }
    int insert(string s){
        TrieNode*curr=root;
        for(int j=0;j<s.size();j++){
            int idx=s[j]-'a';
            if(curr->get(idx)==NULL){
                TrieNode*node=new TrieNode();
                curr->put(idx,node);
            }
            curr=curr->get(idx);
        }
        curr->setCount();
        if(curr->getEnd()){
            return curr->getCount();
        }
        curr->setEnd();
        return curr->getCount();
    }
    string mostFrequentWord(string arr[], int n) {
        string output="",s;
        int currCount=0;
       
        for(int i=n-1;i>=0;i--){
            s=arr[i];
            int count=insert(s);
            if(count>currCount){
                output=s;
                currCount=count;
            }
                
        }
        return output;
    }
};