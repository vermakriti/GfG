class TrieNode{
    vector<TrieNode*> children;
    bool end;
public :
    TrieNode(): children(26){
        end=false;
        for(int i=0;i<26;i++)
            children[i]=nullptr;
    }
    TrieNode*get(int i){
       return children[i];
    }
    void put(int i,TrieNode* node){
        children[i]=node;
    }
    void setEnd(){
        end=true;
    }
    bool getEnd(){
        return end;
    }
};

class Trie {
    TrieNode*root;
public:
    Trie() {
       root= new TrieNode();
    }
    void insert(string word) {
        TrieNode*curr=root;
        if(!search(word)){
            for(int i=0;i<word.size();i++){
                int j=(word[i]-'a');
                if(curr->get(j)==NULL){
                    TrieNode*node= new TrieNode();
                    curr->put(j,node);
                    curr=node;
                }
                else{
                    curr=curr->get(j);
                }
            }
            curr->setEnd();
        }
    }

    bool search(string word) {
        TrieNode*curr=root;
        for(int i=0;i<word.size();i++){
            int j=(word[i]-'a');
            if(curr->get(j)==NULL)
                return false;
            else  curr=curr->get(j);
        }
        if(curr->getEnd())return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
        TrieNode*curr=root;
        for(int i=0;i<prefix.size();i++){
            int j=(prefix[i]-'a');
            if(curr->get(j)==NULL)
                return false;
            else curr=curr->get(j);
        }
        return true;
    }
};
