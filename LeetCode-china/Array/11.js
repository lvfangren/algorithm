/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let result=0;
    for (let i = 0,j=height.length-1; i <j;) {
      result=Math.max(Math.min(height[i],height[j])*(j-i),result);
      if (height[i]<height[j]) {
        ++i;
      }else {
        --j;
      }
    }
    return result;
};

console.log(maxArea([1,2,2,3]));
