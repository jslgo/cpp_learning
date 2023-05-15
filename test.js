

let i = 1

let count=0
while (i++ < 5000) {
    if (hasNoSame(i)) {
        count++
        console.log(i)
    }
}

// console.log(count)

function hasNoSame(n) {
    let str = n + ''
    let memo = {}
    let j = 0
    let res = true
    while (j < str.length) {
        if (memo[str[j]]) {
            res = false
            break
        } else {
            memo[str[j]] = 1
        }
        j++
    }
    return res
}