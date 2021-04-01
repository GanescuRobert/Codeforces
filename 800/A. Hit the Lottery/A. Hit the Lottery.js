//https://codeforces.com/problemset/problem/996/A
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let dollars = Number(readLine());
    let ans = 0;
    let value_100 = Math.floor(dollars / 100);
    dollars -= 100 * value_100;
    let value_20 = Math.floor(dollars / 20);
    dollars -= 20 * value_20;
    let value_10 = Math.floor(dollars / 10);
    dollars -= 10 * value_10;
    let value_5 = Math.floor(dollars / 5);
    dollars -= 5 * value_5;
    let value_1 = dollars;
    ans = value_1 + value_5 + value_10 + value_20 + value_100;
    console.log(ans);
}
//type input.txt | node "A. Hit the Lottery.js"