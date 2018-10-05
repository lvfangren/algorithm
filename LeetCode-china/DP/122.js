/**
 * @param {number[]} prices
 * @return {number}
 */
// 贪心，注意贪心的思想。
var maxProfit = function(prices) {
    let profit=0,tmp=0;
    for (let i = 0; i < prices.length-1; i++) {
        tmp=prices[i+1]-prices[i];
        if (tmp>0) {
          profit+=tmp;
        }
    }
    return profit;
};


console.log(maxProfit([5,6,1,2,0,10,13,4]));
