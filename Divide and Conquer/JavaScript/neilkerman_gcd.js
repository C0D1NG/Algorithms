/**
 * JS function to calculate Greatest Common
 * Divisor using Recursive JS function
 */

function gcd(a, b) {
    return (b == 0) ? a : gcd(b, (a % b))
}

console.log(gcd(81,9)) 
/** Expected Output: 9 */