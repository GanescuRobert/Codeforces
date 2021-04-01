//https://codeforces.com/problemset/problem/510/A
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
    let rows = Number(input[0]),
        cols = Number(input[1]);

    let left = '#' + '\.'.repeat(cols - 1);
    let right = '\.'.repeat(cols - 1) + '#';
    let snake = '#'.repeat(cols);
    let toggle = true;
    for (let i = 0; i < rows; i++) {
        if (i % 2 === 1) {
            if (toggle) {
                console.log(right);
            } else {
                console.log(left)
            }
            toggle = !toggle;
        } else {
            console.log(snake);
        }
    }

}
//type input.txt | node "A. Fox And Snake.js"