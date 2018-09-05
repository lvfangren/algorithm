/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
  if (!head.next) {
    return head;
  }
  let tmp=head;
  let count=1;
  while (tmp.next) {
    ++count;
    tmp=tmp.next;
  }
  count=Math.floor(count/2);
  let result=head.next;
  while (--count) {
    result=result.next;
  }
  return result;
};
