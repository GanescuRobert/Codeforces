//https://codeforces.com/problemset/problem/750/A
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
    let minutes = 240;
    let input = readLine().split(' ');
    let n = Number(input[0]),
        k = Number(input[1]);
    let rest_minutes = minutes - k;
    let i = 1;
    while (rest_minutes >= 5 * i) {
        rest_minutes -= 5 * i;
        i++;
        if (i - 1 === n) {
            break;
        }
    }
    console.log(i - 1);

}
//type input.txt | node "A. New Year and Hurry.js"