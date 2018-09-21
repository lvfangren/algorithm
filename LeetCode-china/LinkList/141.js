/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */

// 这是自己的思路；就是利用hash查找，第一遍写的时候key值考虑错误，选成节点的val；第二遍写的时候换成了节点本身，但是感觉不对，测试也是错的。看了别人的题解焕然大悟，实在粗心啊
// var hasCycle = function(head) {
//     if (!head||!head.next) {
//       return false;
//     }
//     let result={};
//     let p=head;
//     while (p) {
//       if (!result[p]) {
//         result[p]=true;
//       }else {
//         return true;
//       }
//       p=p.next;
//     }
//   return false;
// };


var hasCycle = function(head) {
  if (!head || !head.next) {
    return false;
  }
  let p = head;
  while (p) {
    if (p.flag) {
      return true;
    }
    p.flag = true;
    p = p.next;
  }
  return false;
};
