/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
  // 开始的思路是把两个链表中的值取出来，得到链表值构建新链表，新链表的每个值做对应相加，进位处理，后面看了下参考答案，发现做复杂了，多了一步不必要就是把链表值单独取出来。
  // const getArr=(list)=>{
  //   if (list.next) {
  //     return [list.val];
  //   }
  //   let arr=[];
  //   while (list.next) {
  //     arr.push(list.val);
  //     list=list.next;
  //   }
  //   return arr;
  // }
  // let [arr1,arr2]=[getArr(l1),getArr(l2)];
  // // console.log(arr1);
  // arr1.reverse();
  // arr2.reverse();
  // let newLen=Math.max(arr1.length,arr2.length);
  // let result=new ListNode();
  // let tmp=0;
  // for (let i=0;i<newLen;i++) {
  //     if (arr1[i]&&arr2[i]) {
  //       let tmpNode=new ListNode();
  //
  //     }
  // }


  // 用注释注起来的语句是易错部分，注意！！！！
  let result=new ListNode(0);
  let tmp1=l1,tmp2=l2,curr=result;
  let addCount=0;
  while (tmp1!=null||tmp2!=null) {
    let x=tmp1!=null?tmp1.val:0;
    let y=tmp2!=null?tmp2.val:0;
    let sum=x+y+addCount;
    addCount=parseInt(sum/10);
    curr.next=new ListNode(sum%10);
    //curr.val=sum%10;
    console.log(curr);
    curr=curr.next;
    if(tmp1!=null){
        tmp1=tmp1.next;
    }
    if(tmp2!=null){
        tmp2=tmp2.next;
    }

  }
  if (addCount>0) {
    curr.next=new ListNode(addCount);
    //curr.val=addCount;
  }
  return result.next;
};
