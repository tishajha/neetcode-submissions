/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        vector<string>res;
        dfsserialize(root,res);
        return join(res,",");
    }

    void dfsserialize(TreeNode* r,vector<string>&res){
        if(!r){
            res.push_back("N");
            return;
        }
        res.push_back(to_string(r->val));
        dfsserialize(r->left,res);
        dfsserialize(r->right,res);
    }

    string join(const vector<string>&v,const string&delim){
        ostringstream s;
        for(const auto &i:v){
            if(&i!=&v[0]){
                s<<delim;
            }
            s<<i;
        }
        return s.str();
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string>val=split(data,',');
        int i=0;
        return dfsdeser(val,i);
    }
    TreeNode* dfsdeser(vector<string>& val,int &i){
        if(val[i]=="N")
        {
            i++;
            return NULL;
        }
        TreeNode* node=new TreeNode(stoi(val[i]));
        i++;
        node->left=dfsdeser(val,i);
        node->right= dfsdeser(val,i);
        return node;
    }
    vector<string> split(const string &s,char delim){
        vector<string>ele;
        stringstream ss(s);
        string item;
        while(getline(ss,item, delim)){
            ele.push_back(item);
        }
        return ele;
    }
};
