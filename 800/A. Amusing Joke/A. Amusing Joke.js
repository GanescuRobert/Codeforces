//https://codeforces.com/problemset/problem/141/A

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
    let i1 = readLine() + readLine();
    let i3 = readLine();
    i1 = i1.split('').sort().join('');
    i3 = i3.split('').sort().join('');
    if (i1 === i3) {
        console.log("YES");
    } else {
        console.log("NO");
    }
}

//type input.txt | node "A. Amusing Joke.js"