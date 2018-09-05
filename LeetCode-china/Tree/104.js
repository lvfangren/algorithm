/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function(root) {
    if (!root) {
      return 0;
    }
    let count=1,leftCount=0,rightCount=0;
    if (root.left) {
      leftCount+=maxDepth(root.left);
    }
    if (root.right) {
      rightCount+=maxDepth(root.right);
    }
    return count+Math.max(leftCount,rightCount);
};



// var maxDepth = function(root) {
//     if (!root) {
//         return 0;
//     }
//     let q = [];
//     root.d = 1;
//     q.push(root);
//     let ans = 0;
//     while (q.length) {
//         let node = q.shift();
//         ans = node.d;
//         console.log(ans);
//         if (node.left) {
//             node.left.d = node.d + 1;
//             q.push(node.left);
//         }
//         if (node.right) {
//             node.right.d = node.d + 1;
//             q.push(node.right);
//         }
//     }
//     return ans;
// };
