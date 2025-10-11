/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    let n = functions.length;
    return function(x) {
        for(i=n-1; i>=0; i--){
           x = functions[i](x);
        }
        return x;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */