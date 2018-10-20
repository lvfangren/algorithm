/**
 * @param {number[]} ratings
 * @return {number}
 */
var candy = function(ratings) {
    let n=ratings.length;
    if(ratings == null || n == 0) {
        return 0;
    }
    // let result=new Array(n).fill(1);
    let result=ratings.map(i=>1);
    for (let i = 0; i < n-1; i++) {
      if (ratings[i]<ratings[i+1]) {
        result[i+1]=result[i]+1;
      }
    }
    console.log(result);
    let sum=0;
    for (let i = n-1; i>=1; i--) {
      sum+=result[i];
      if (ratings[i-1]>ratings[i]&&result[i-1]<=result[i]) {
        result[i-1]=result[i]+1;
      }
    }
    console.log(result);
    return sum+result[0];
};

console.log(candy([2,2]));
