/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let minBuy=Infinity;

    let profit=0;
    for (let i = 0; i < prices.length; i++) {
      if (prices[i]<minBuy) {
        minBuy=prices[i];
      }
      let getNow=prices[i]-minBuy;
      if (getNow>profit) {
        profit=getNow;
      }
    }
    return profit;
};

console.log(maxProfit([1,12]));

// let x=[1,2,3,4];
// console.log(x.slice(1),x);
