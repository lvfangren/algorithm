// 双指针（块慢指针）
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

function middleNode(head: ListNode | null): ListNode | null {
    let fast = head, slow = head;
    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;
    }
    return slow;
};

function removeNthFromEnd(head: ListNode | null, n: number): ListNode | null {
    let res = new ListNode(0, head);  // 解决链表长度为1问题
    let fast = res, slow = res;
    while (n--) {
        fast = fast.next;
    }
    while (fast.next) {
        fast = fast.next;
        slow = slow.next;
    }
    slow.next = slow.next.next;
    console.log(head);

    return res.next;
};