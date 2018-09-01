/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let dp=[];
    dp[0]=prices[0];
    for (let i = 1; i < prices.length; i++) {
      dp[i]=Math.max(prices[i]-dp[i-1],)
    }
};

console.log(maxProfit([1,1,2]));

// let x=[1,2,3,4];
// console.log(x.slice(1),x);
