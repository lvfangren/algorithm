// 双指针
function maxArea(height: number[]): number {
    let res = 0, left = 0, right = height.length - 1;
    while (left < right) {
        res = Math.max(res, ((right - left) * Math.min(height[left], height[right])));
        if (height[left] < height[right]) {
            left++;
        } else {
            right++;
        }
    }
    return res;
};
