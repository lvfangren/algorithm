/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let r = [];
    r=nums1.splice(0,m).concat(nums2.splice(0,n));
    // console.log(r);
    // 第一次的时候遍历长度有点问题
    for (let i = 0; i < m + n; i++) {
        nums1[i] = r[i];
    }
    nums1.sort((x, y) => x - y);
};
let nums1 = [1,2,3,0,0,0],m = 3
let nums2 = [2,5,6],n = 3
// console.log(merge(nums1,m,nums2,n));
merge(nums1,m,nums2,n)
console.log(nums1);
