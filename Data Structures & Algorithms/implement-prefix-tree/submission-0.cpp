class TrieNode {
    public:
    unordered_map<char ,TrieNode*> childern;
    bool isWord;

    TrieNode(){
        isWord= false;
    }
};
class PrefixTree {
    TrieNode* root;
public:
    PrefixTree() {
        root= new TrieNode();
        
    }
    
    void insert(string word) {
        TrieNode* node= root;
        for(char c:word){
            if(node->childern.find(c)==node->childern.end()){
                node->childern[c]= new TrieNode();
            }
            node= node->childern[c];
        }
        node->isWord= true;
    }
    
    TrieNode* findNode(string prefix) {
    TrieNode* node = root;
    for (char c : prefix) {
        if (node->childern.find(c) == node->childern.end()) {
            return nullptr;
        }
        node = node->childern[c];
    }
    return node;
    }
    bool search(string word) {
        TrieNode* node= findNode(word);
        return node!=nullptr && node->isWord;
    }
    
    bool startsWith(string prefix) {
        return findNode(prefix)!=nullptr;
        
    }
};
