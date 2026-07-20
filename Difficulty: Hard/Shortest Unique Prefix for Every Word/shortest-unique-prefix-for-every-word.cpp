class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;
    int cnt=0;

    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Solution {
  public:
    vector<string> findPrefixes(vector<string>& arr) {
        // code here
        vector<string>ans;
        TrieNode* root=new TrieNode();
        for(int i=0;i<arr.size();i++){
            TrieNode* temp = root;
            for (char ch : arr[i]) {
                int idx = ch - 'a';

            if (temp->children[idx] == nullptr) {
                temp->children[idx] = new TrieNode();
            }
            temp = temp->children[idx];
            temp->cnt++;
            }
        }
        
        
        for(int i=0;i<arr.size();i++){
            TrieNode* temp = root;
            string curr;
            for (char ch : arr[i]) {
                int idx = ch - 'a';
                temp = temp->children[idx];
                curr += ch;
                if (temp->cnt == 1)
                 break;
            }
            ans.push_back(curr);
        }
        return ans;
        
    }
};