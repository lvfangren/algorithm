/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
  let tmp=head;
  while (tmp.next) {
    if (head.val==val) {
      head.val=head.next.val;
      head.next=head.next.next;
      tmp=head.next;
    }else {
      tmp=head.next;
    }
  }
  return head;
};
