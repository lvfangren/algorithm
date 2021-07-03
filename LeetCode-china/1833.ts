// 水题（大哥们一上来就往dp靠，就我水啥也不想就是贪心思维干😂）
function maxIceCream(costs: number[], coins: number): number {
    costs.sort((a, b) => a - b);
    if (costs[0] > coins) {
        return 0;
    }
    if (costs.reduce((a, b) => a + b) <= coins) {
        return costs.length;
    }
    let res = 0;
    for (let index = 0; index < costs.length; index++) {
        const element = costs[index];
        coins -= element;
        if (coins < 0) {
            return res;
        }
        res++;
    }
    return res;
};