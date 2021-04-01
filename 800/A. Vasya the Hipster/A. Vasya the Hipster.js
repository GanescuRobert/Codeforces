//https://codeforces.com/problemset/problem/581/A
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
    let input = readLine().split(' ');
    let a = Number(input[0]),
        b = Number(input[1]);
    console.log(Math.min(a, b), Math.floor(Math.abs(a - b) / 2));
}
//type input.txt | node "A. Vasya the Hipster.js"