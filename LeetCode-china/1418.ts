// 直接模拟
function displayTable(orders: string[][]): string[][] {
    let res: string[][] = [], tmpSet: Set<string> = new Set(), maps = {};
    for (let index = 0; index < orders.length; index++) {
        const element = orders[index];
        element.shift();
        tmpSet.add(element[1]);
        if (maps[element[0]]) {
            maps[element[0]].push(element[1]);
        } else {
            maps[element[0]] = [element[1]];
        }
    }

    res[0] = [...tmpSet];
    res[0].sort();
    res[0].unshift('Table');
    let ids = 1;
    for (const key in maps) {
        res[ids] = [];
        res[ids][0] = key;
        ids++;
    }
    console.log(maps, res);


    for (let index = 1; index < res.length; index++) {
        for (let j = 1; j < res[0].length; j++) {
            res[index][j] = findCount(
                maps[res[index][0]],
                res[0][j]
            );
        }

    }
    res.sort((a, b) => {
        if (a[0] === 'Table') {
            return 1;
        }
        return (+a[0]) - (+b[0]);
    });
    return res;
};

function findCount(arr: string[], target: string): string {
    let count = 0;
    for (let index = 0; index < arr.length; index++) {
        if (arr[index] === target) {
            count++;
        }
    }
    return count.toString();
}

// 测试数据
let res = [["David","3","Ceviche"],["Corina","10","Beef Burrito"],["David","3","Fried Chicken"],["Carla","5","Water"],["Carla","5","Ceviche"],["Rous","3","Ceviche"]]
