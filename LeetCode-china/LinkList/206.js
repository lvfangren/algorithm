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
var reverseList = function(head) {
  if (!head||!head.next) {
    return head;
  }

  let onep=head,twop=head.next;
  onep.next=null;
  while (twop) {
      let tmp=twop;
      twop=twop.next;
      tmp.next=onep;
      onep=tmp;
  }
  return onep;
};
