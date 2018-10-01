/**
 * @param {number[]} nums
 */
var NumArray = function(nums) {
    var sum = 0;
    this.num=[];
    this.sum=[];
    nums.forEach((e, i) => {
        sum += e;
        this.num[i] = nums[i];
        this.sum[i] = sum;
    })
};

/**
 * @param {number} i
 * @param {number} j
 * @return {number}
 */
NumArray.prototype.sumRange = function(i, j) {
    return this.sum[j] - this.sum[i] + this.num[i];
};

/**
 * Your NumArray object will be instantiated and called as such:
 * var obj = Object.create(NumArray).createNew(nums)
 * var param_1 = obj.sumRange(i,j)
 */
