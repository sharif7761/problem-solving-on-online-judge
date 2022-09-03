"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

function print(x) {
    console.log(x);
}
let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
    inputString += inputStdin;
});
process.stdin.on("end", () => {
    inputString = inputString.split("\n");
    main();
});
function readline() {
    return inputString[currentLine++];
}

// ********** Code Start **********

function main() {
    let num = parseInt(readline());
    for (let i = 0; i < num; i++) {
        let st = readline();
        let length = st.length - 1;
        if (length <= 10) {
            console.log(st);
        } else {
            console.log(st.charAt(0) + (length - 2) + st.charAt(length - 1));
        }
    }
}
