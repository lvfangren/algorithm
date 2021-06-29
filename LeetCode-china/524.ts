// 双指针
function findLongestWord(s: string, dictionary: string[]): string {
    let res = '';
    dictionary.sort();
    for (let index = 0; index < dictionary.length; index++) {
        if (dictionary[index].length > s.length) {
            continue;
        }
        if (isSub(s, dictionary[index]) && res.length < dictionary[index].length) {
            res = dictionary[index];
        }
    }

    return res;
};
function isSub(s: string, d: string) {
    let tmpCount = d.length;
    let left = 0, right = 0;
    while (left < tmpCount && right < s.length) {
        if (d[left] === s[right]) {
            left++;
        }
        right++;
    }
    return left === tmpCount;
}
findLongestWord("abpcplea",["ale","apple","monkey","plea"])