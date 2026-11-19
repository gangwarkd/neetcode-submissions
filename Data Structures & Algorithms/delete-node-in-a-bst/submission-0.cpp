
class Solution {
public:
TreeNode* ios(TreeNode* root){
    TreeNode* suc=root->right;
    while(suc->left!=NULL){
        suc=suc->left;
    }
    return suc;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            //case:1 No child
            if(root->left ==NULL && root->right ==NULL){
                return NULL;
            }
            //case: 2: 1 child Node
            if(root->left==NULL || root->right==NULL){
                if(root->left==NULL){
                    return root->right;
                }else{
                    return root->left;
                }
            }
            // case 3: 2 child Nodes
            if(root->left!=NULL && root->right!=NULL){
                TreeNode* suc=ios(root);
                root->val=suc->val;
                root->right=deleteNode(root->right,suc->val);
            }
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else{
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
};