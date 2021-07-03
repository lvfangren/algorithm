// 水题
function frequencySort(s: string): string {
    let maps = new Map();

    for (let index = 0; index < s.length; index++) {
        maps.set(
            s[index],
            maps.get(s[index]) ? (maps.get(s[index]) + 1) : 1
        );
    }
    let tmp = [...maps.keys()], res = '';
    tmp.sort((a, b) => {
        return maps.get(b) - maps.get(a);
    });
    for (let index = 0; index < tmp.length; index++) {
        let keys: string = tmp[index];
        res += keys.repeat(maps.get(keys));
    }
    return res;
};