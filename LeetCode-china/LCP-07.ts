// 转成棵树,树的层数就是传递次数
function numWays(n: number, relation: number[][], k: number): number {
    let tmp = [];
    relation.sort((a, b) => {
        return a[0] - b[0];
    });

    getArr(relation, tmp, 0, 0);
    let ids = 1;
    for (let index = 0; index < k - 1; index++) {
        for (let j = 0; j < tmp[index].length; j++) {
            getArr(relation, tmp, tmp[index][j], ids);
        }
        ids++;
    }
    if (tmp[k - 1]) {
        return tmp[k - 1].filter(i => i === n - 1).length;
    }
    return 0;
};

function getArr(relation, tmp, target, inds) {
    for (let index = 0; index < relation.length; index++) {
        const subArr = relation[index];
        if (subArr[0] === target) {
            if (tmp[inds]) {
                tmp[inds].push(subArr[1]);
            } else {
                tmp[inds] = [subArr[1]];
            }
        }
    }
}