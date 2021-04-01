//https://codeforces.com/problemset/problem/1335/A

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
    let test_cases = Number(readLine());

    while (test_cases--) {
        let candies = Number(readLine());
        if (candies > 2) {
            console.log(Math.floor(candies / 2 - Number(candies % 2 === 0)));
        } else {
            console.log(0)
        }
    }
}

//type input.txt | node "A. Candies and Two Sisters.js"