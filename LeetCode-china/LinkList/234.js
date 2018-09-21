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
var isPalindrome = function(head) {
  let p=head,str=[];
  while (p) {
    str.push(p.val);
    p=p.next;
  }
  console.log(str);
  let i=0,j=str.length-1,flag=true;
  while (i<=j) {
    if (str[i]==str[j]) {
      i++;
      j--;
    }else {
      flag=false;
      break;
    }
  }
  return flag;
};

// isPalindrome()
