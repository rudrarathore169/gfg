class Solution {
public:
    int solve(Node* root, int &ans) {
        if(root == NULL)
            return 0;

        int lans = solve(root->left, ans);
        int rans = solve(root->right, ans);

        int result = 1;

        if(root->left && root->left->data == root->data + 1)
            result = max(result, lans + 1);

        if(root->right && root->right->data == root->data + 1)
            result = max(result, rans + 1);

        ans = max(ans, result);

        return result;
    }

    int longestConsecutive(Node* root) {
        if(root == NULL)
            return -1;

        int ans = 1;
        solve(root, ans);

        return (ans == 1) ? -1 : ans;
    }
};