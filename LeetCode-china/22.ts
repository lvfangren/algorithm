// 双指针
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function getKthFromEnd(head: ListNode | null, k: number): ListNode | null {
    let leftNode: ListNode = head, rightNode: ListNode = head;
    while(rightNode){
        if(k <= 0) {
            leftNode = leftNode.next;
        }
        rightNode = rightNode.next;
        k--;
    }
    return leftNode;
};