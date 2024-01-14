class Solution {
public:
    int findHeightLeft(TreeNode* root){
        int height=0;
        while(root){
            height++;
            root=root->left;
        }
        return height;
    }
    int findHeightRight(TreeNode* root){
        int height=0;
        while(root){
            height++;
            root=root->right;
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int lh= findHeightLeft(root);
        int rh = findHeightRight(root);

        if(lh==rh) return (1<<lh)-1;
        return 1+ countNodes(root->left) + countNodes(root->right);

    }
};
