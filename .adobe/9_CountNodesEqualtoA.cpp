
// 2265. Count Nodes Equal to Average of Subtree
class Solution {
public:
    pair<int,int> recursive(TreeNode* root,int &ans){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int> curr;
        pair<int,int> left=recursive(root->left,ans);
        pair<int,int> right=recursive(root->right,ans);
        if((left.first+right.first+root->val)/(left.second+right.second+1)== root->val){
            ans++;
        }
        curr.first=left.first+right.first+root->val;
        curr.second=left.second+right.second+1;
        return curr;
    }

    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        pair<int,int> a=recursive(root,ans);
        return ans;
    }
};