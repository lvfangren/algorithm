// 双指针
function removeDuplicates1(nums: number[]): number {
    // 这里使用len是考虑浏览器环境遍历原型链查找length属性带来的消耗
    let res = 0, len = nums.length;
    if (len === 1 || len === 0) {
        return len;
    }
    for (let rightIndex = 1; rightIndex < len; rightIndex++) {
        // const [rightVal, leftVal] = [nums[rightIndex], nums[res]];
        // if (rightVal !== leftVal) {
        //     // 这块会有点绕，核心就是元素替换
        //     res++;
        //     nums[res] = nums[rightIndex];
        // }
        // 减小变量声明带来的内存开销
        if (nums[rightIndex] !== nums[res]) {
            res++;
            nums[res] = nums[rightIndex];
        }
    }
    // console.log(res + 1);
    
    return res + 1;
};
