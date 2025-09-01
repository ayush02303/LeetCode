/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const res = [];
    for (let i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            res.push(arr[i]);
        }
    }
    return res;
};

/**
 * Example usage:
 * filter([0,10,20,30], function(n) { return n > 10; }) 
 * // [20,30]
 *
 * filter([1,2,3], function(n, i) { return i === 0; })
 * // [1]
 */
