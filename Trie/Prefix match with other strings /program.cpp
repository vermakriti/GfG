class TrieNode{
    vector<TrieNode*> children;
    int count=0;
    public:
        TrieNode():children(26){
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
        void setCount(){
            count++;
        }
        int getCount(){
            return count;
        }
};
class Solution{   
    TrieNode*root;
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
            }
            curr=curr->get(j);
            curr->setCount();
        }
    }
    
    int search(string s, int n){
        
        TrieNode*curr=root;
        for(int i=0;i<n;i++){
            int j=s[i]-'a';
            if(curr->get(j)==nullptr){
                return 0;
            }
            curr=curr->get(j);
        }
        return curr->getCount();
    }
    int klengthpref(string arr[], int n, int k, string str){    
        
        for(int i=0;i<n;i++)
            insert(arr[i]);
        return search(str,k);    
    }
};