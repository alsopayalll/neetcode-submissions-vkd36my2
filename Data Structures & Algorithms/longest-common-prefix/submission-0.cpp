class Solution {
public:
    struct TrieNode{
            TrieNode*child[26];
            bool isEnd;
            TrieNode(){
                for(int i=0;i<26;i++) child[i]=NULL;
                isEnd=false;
            }
    };
    string longestCommonPrefix(vector<string>& strs) {
        
        TrieNode*root=new TrieNode();
            for(string i : strs){
                TrieNode* node = root;
                for(char ch:i){
                    int idx=ch-'a';
                    if(node->child[idx]==NULL){
                        node->child[idx]=new TrieNode();
                    }
                    node=node->child[idx];
                }
                node->isEnd=true;
            }
            
        
        string ans="";
        TrieNode*node=root;
        while(true){
            int cnt=0; int indx=-1;
            for(int i=0;i<26;i++){
                if(node->child[i]!=NULL){
                    cnt++;
                    indx=i;
                }
            }
            if(cnt!=1|| node->isEnd) break;
            ans.push_back('a'+indx);
            node=node->child[indx];
        }
        return ans;

    }
};