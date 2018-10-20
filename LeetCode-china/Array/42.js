/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
  if(height == null || height.length < 3) return 0;
      let i = 0, j = height.length - 1, res = 0;
      let lh = height[i], rh = height[j];
      while(i <= j){
          lh = Math.max(lh, height[i]);
          rh = Math.max(rh, height[j]);
          if(lh < rh){
              res += lh - height[i];
              i++;
              console.log(lh,rh,i,j,res);
          }else{
              res += rh - height[j];
              // console.log(res);
              j--;
          }
      }
      return res;
};


console.log(trap([0,1,0,2,1,0,1,3,2,1,2,1]));
