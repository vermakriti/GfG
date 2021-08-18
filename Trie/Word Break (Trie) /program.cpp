class TrieNode{
    vector<TrieNode*> children;
    bool end;
    public:
    TrieNode():children(26){
        end=false;
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
    }
    TrieNode*get(int i){
        return children[i];
    }
    void put(int i,TrieNode*node){
        children[i]=node;
    }
    int getEnd(){return end;}
    void setEnd(){ end=true;}
    
};
class Solution{
    TrieNode *root;
    public:
    Solution(){
        root=new TrieNode();
    }
    void insert(string s){
        TrieNode*curr=root;
        for(int i=0;i<s.size();i++){
            int j=s[i]-'a';
            if(curr->get(j)==nullptr){
                TrieNode*node=new TrieNode();
                curr->put(j,node);
                curr=node;
            }
            else curr=curr->get(j);
        }
        curr->setEnd();
    }
    
    bool search(string s){
        TrieNode*curr=root;
        for(int i=0;i<s.size();i++){
            int j=s[i]-'a';
            if(curr->get(j)==nullptr){
                return false;
            }
            else curr=curr->get(j);
        }
        if(curr->getEnd())
            return true;
        return false;    
    }
    bool solve(string A){
        int size=A.size();
        if(size==0)
            return true;
        for(int i=1;i<=A.size();i++){
            if(search(A.substr(0,i)) && solve(A.substr(i,size-i)))
                return true;
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
       
        for(int i=0;i<B.size();i++)
            insert(B[i]);
        return solve(A);
        
    }
};