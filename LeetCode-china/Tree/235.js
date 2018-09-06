/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
      while(true){
        var value =  root.val;
        if(p.val >= value && value >= q.val || p.val <= value && value <= q.val){
            return root;
        } else if(p.val > value && q.val > value){
            root =  root.right;
        } else {
            root =  root.left;
        }
    }
};
