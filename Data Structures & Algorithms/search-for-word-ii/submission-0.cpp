class TrieNode{
public :
    unordered_map<char, TrieNode*> children;
    bool isword;
    TrieNode(): isword(false){}
    void addWord(const string & word){
        TrieNode* curr= this;
        for(char c: word){
            if(!curr->children.count(c)){
                curr->children[c]= new TrieNode();

            }
            curr=curr->children[c];
        }
        curr->isword= true;
    }
};
class Solution {
public:
unordered_set<string> res;
vector<vector<bool>> visit;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root= new TrieNode ();
        for(const string& word: words){
            root->addWord(word);
        }
        int Row=board.size(), Col= board[0].size();
        visit.assign(Row, vector<bool> (Col,false));

        for(int r=0; r<Row; r++){
            for(int c=0; c<Col; c++){
                dfs(board, r,c , root, "");
            }
        }
        return vector<string>(res.begin(), res.end());
    }
    void dfs(vector<vector<char>> & board, int r, int c, TrieNode* node, string word ){
        int Row= board.size(); int Col= board[0].size();
        if(r<0|| c<0|| r>=Row||c>= Col||visit[r][c]||!node->children.count(board[r][c])){
            return;
        }
        visit[r][c]= true;
        node= node->children[board[r][c]];
        word+= board[r][c];
        if(node->isword){
            res.insert(word);
        }
        dfs(board, r+1, c, node, word);
        dfs(board, r-1, c, node,word);
        dfs(board, r, c+1,node, word );
        dfs(board , r, c-1, node, word);

        visit[r][c]= false;
    }
};
