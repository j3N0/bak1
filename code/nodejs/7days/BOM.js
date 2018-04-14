var fs = require('fs');

var bin = fs.readFileSync('input2.txt');
console.log(bin[0]===0xEF);
